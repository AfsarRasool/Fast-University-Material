CREATE DATABASE UniversityDB;
USE UniversityDB;
SELECT DATABASE();

-- Question 2

-- Task 1
CREATE TABLE Department (
    DepartmentID INT PRIMARY KEY,
    DepartmentName VARCHAR(100) NOT NULL UNIQUE,
    OfficeLocation VARCHAR(100) NOT NULL,
    ContactNumber VARCHAR(15) NOT NULL
);

CREATE TABLE Student (
    StudentID INT PRIMARY KEY,
    StudentName VARCHAR(100) NOT NULL,
    DateOfBirth DATE NOT NULL,
    Email VARCHAR(100) NOT NULL UNIQUE,
    Phone VARCHAR(15) NOT NULL,
    AdmissionDate DATE NOT NULL,
    AcademicStatus VARCHAR(20) NOT NULL,
    DepartmentID INT NOT NULL,

    CONSTRAINT chk_student_status
        CHECK (AcademicStatus IN ('Active', 'Suspended', 'Graduated', 'Withdrawn')),

    CONSTRAINT fk_student_department
        FOREIGN KEY (DepartmentID)
        REFERENCES Department(DepartmentID)
);

CREATE TABLE Instructor (
    InstructorID INT PRIMARY KEY,
    InstructorName VARCHAR(100) NOT NULL,
    Email VARCHAR(100) NOT NULL UNIQUE,
    Phone VARCHAR(15) NOT NULL,
    Designation VARCHAR(50) NOT NULL,
    Salary DECIMAL(10,2) NOT NULL,
    DepartmentID INT NOT NULL,

    CONSTRAINT chk_salary
        CHECK (Salary > 0),

    CONSTRAINT fk_instructor_department
        FOREIGN KEY (DepartmentID)
        REFERENCES Department(DepartmentID)
);

CREATE TABLE Course (
    CourseID INT PRIMARY KEY,
    CourseTitle VARCHAR(100) NOT NULL,
    CreditHours INT NOT NULL,
    CourseLevel VARCHAR(20) NOT NULL,
    DepartmentID INT NOT NULL,

    CONSTRAINT chk_credit_hours
        CHECK (CreditHours BETWEEN 1 AND 6),

    CONSTRAINT fk_course_department
        FOREIGN KEY (DepartmentID)
        REFERENCES Department(DepartmentID)
);

CREATE TABLE CourseSection (
    SectionID INT PRIMARY KEY,
    CourseID INT NOT NULL,
    InstructorID INT NOT NULL,
    Semester VARCHAR(20) NOT NULL,
    AcademicYear INT NOT NULL,
    SectionNumber VARCHAR(10) NOT NULL,
    Classroom VARCHAR(30) NOT NULL,
    Schedule VARCHAR(100) NOT NULL,

    CONSTRAINT chk_semester
        CHECK (Semester IN ('Spring', 'Summer', 'Fall')),

    CONSTRAINT fk_section_course
        FOREIGN KEY (CourseID)
        REFERENCES Course(CourseID),

    CONSTRAINT fk_section_instructor
        FOREIGN KEY (InstructorID)
        REFERENCES Instructor(InstructorID)
);

CREATE TABLE Registration (
    RegistrationID INT PRIMARY KEY,
    StudentID INT NOT NULL,
    SectionID INT NOT NULL,
    RegistrationDate DATE NOT NULL,
    EnrollmentStatus VARCHAR(20) NOT NULL,
    FinalGrade VARCHAR(2),

    CONSTRAINT chk_enrollment_status
        CHECK (EnrollmentStatus IN ('Enrolled', 'Completed', 'Dropped')),

    CONSTRAINT fk_registration_student
        FOREIGN KEY (StudentID)
        REFERENCES Student(StudentID),

    CONSTRAINT fk_registration_section
        FOREIGN KEY (SectionID)
        REFERENCES CourseSection(SectionID)
);

-- 2
ALTER TABLE Student
ADD City VARCHAR(50);

-- 3
UPDATE Student
SET AcademicStatus = 'Graduated'
WHERE StudentID = 101;

-- 4
DELETE FROM CourseSection
WHERE SectionID = 1;

-- Department

INSERT INTO Department VALUES
(1, 'Computer Science', 'Block A', '0211111111'),
(2, 'Software Engineering', 'Block B', '0212222222'),
(3, 'Cyber Security', 'Block C', '0213333333');

-- Student

INSERT INTO Student VALUES
(101, 'Ali Khan', '2004-05-10', 'ali@gmail.com', '03001234567',
 '2022-09-01', 'Active', 1, 'Karachi'),

(102, 'Sara Ahmed', '2003-08-20', 'sara@gmail.com', '03002345678',
 '2022-09-01', 'Active', 1, 'Karachi'),

(103, 'Usman Tariq', '2004-01-15', 'usman@gmail.com', '03003456789',
 '2023-09-01', 'Active', 2, 'Lahore'),

(104, 'Ayesha Noor', '2003-11-22', 'ayesha@gmail.com', '03004567890',
 '2022-09-01', 'Graduated', 3, 'Islamabad'),

(105, 'Hamza Ali', '2005-03-30', 'hamza@gmail.com', '03005678901',
 '2024-09-01', 'Active', 2, 'Karachi');


-- Instructor

INSERT INTO Instructor VALUES
(201, 'Dr. Ahmad', 'ahmad@uni.edu', '03111111111',
 'Professor', 150000, 1),

(202, 'Dr. Bilal', 'bilal@uni.edu', '03222222222',
 'Associate Professor', 120000, 1),

(203, 'Ms. Fatima', 'fatima@uni.edu', '03333333333',
 'Lecturer', 80000, 2),

(204, 'Mr. Hassan', 'hassan@uni.edu', '03444444444',
 'Assistant Professor', 100000, 3);

-- Course

INSERT INTO Course VALUES
(301, 'Database Systems', 3, 'Undergraduate', 1),

(302, 'Data Structures', 4, 'Undergraduate', 1),

(303, 'Software Engineering', 3, 'Undergraduate', 2),

(304, 'Network Security', 4, 'Undergraduate', 3);

-- Course Sections

INSERT INTO CourseSection VALUES
(401, 301, 201, 'Fall', 2026, 'A', 'Lab-1',
 'Mon Wed 10:00-11:30'),

(402, 302, 202, 'Fall', 2026, 'A', 'Lab-2',
 'Tue Thu 09:00-10:30'),

(403, 303, 203, 'Fall', 2026, 'B', 'Room-5',
 'Mon Wed 01:00-02:30'),

(404, 304, 204, 'Fall', 2026, 'A', 'Room-7',
 'Tue Thu 12:00-01:30');

-- Registration

INSERT INTO Registration VALUES
(501, 101, 401, '2026-08-25', 'Completed', 'A'),

(502, 101, 402, '2026-08-25', 'Enrolled', NULL),

(503, 102, 401, '2026-08-26', 'Completed', 'B+'),

(504, 103, 403, '2026-08-27', 'Enrolled', NULL),

(505, 104, 404, '2026-08-28', 'Completed', 'A-');


-- 5
SELECT
    StudentID,
    StudentName,
    Email,
    AcademicStatus
FROM Student
ORDER BY StudentName ASC;

-- 6
SELECT
    MAX(Salary) AS HighestSalary,
    MIN(Salary) AS LowestSalary,
    AVG(Salary) AS AverageSalary
FROM Instructor;

-- 7
SELECT
    DepartmentID,
    COUNT(*) AS NumberOfStudents
FROM Student
GROUP BY DepartmentID
ORDER BY NumberOfStudents DESC;

-- 8
SELECT
    S.StudentID,
    S.StudentName,
    D.DepartmentName
FROM Student S
JOIN Department D
ON S.DepartmentID = D.DepartmentID;

-- 9 
SELECT
    S.StudentName,
    C.CourseTitle,
    I.InstructorName,
    CS.Semester,
    R.EnrollmentStatus,
    R.FinalGrade
FROM Registration R
JOIN Student S
    ON R.StudentID = S.StudentID
JOIN CourseSection CS
    ON R.SectionID = CS.SectionID
JOIN Course C
    ON CS.CourseID = C.CourseID
JOIN Instructor I
    ON CS.InstructorID = I.InstructorID;
    
-- 10
SELECT
    StudentID,
    StudentName
FROM Student
WHERE StudentID NOT IN (
    SELECT StudentID
    FROM Registration
);
-- 11
SELECT
    StudentID,
    StudentName,
    Email
FROM Student
WHERE DepartmentID = (
    SELECT DepartmentID
    FROM Department
    WHERE DepartmentName = 'Computer Science'
);

-- 12
SELECT
    InstructorID,
    InstructorName,
    Salary
FROM Instructor
WHERE Salary >
(
    SELECT AVG(Salary)
    FROM Instructor
);

-- 13
SELECT *
FROM Course
WHERE CreditHours >
(
    SELECT AVG(CreditHours)
    FROM Course
);

-- 14
SELECT StudentName
FROM Student
WHERE StudentID IN
(
    SELECT R.StudentID
    FROM Registration R
    JOIN CourseSection CS
        ON R.SectionID = CS.SectionID
    JOIN Course C
        ON CS.CourseID = C.CourseID
    WHERE C.CourseTitle = 'Database Systems'
);

-- 15
SELECT
    D.DepartmentName,
    COUNT(DISTINCT S.StudentID) AS NumberOfStudents,
    COUNT(DISTINCT C.CourseID) AS NumberOfCourses,
    AVG(I.Salary) AS AverageInstructorSalary
FROM Department D
LEFT JOIN Student S
    ON D.DepartmentID = S.DepartmentID
LEFT JOIN Course C
    ON D.DepartmentID = C.DepartmentID
LEFT JOIN Instructor I
    ON D.DepartmentID = I.DepartmentID
GROUP BY D.DepartmentID, D.DepartmentName
HAVING AVG(I.Salary) >
(
    SELECT AVG(Salary)
    FROM Instructor
);