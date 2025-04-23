#include <stdio.h>

int main() {
    int attendance, assignment, exam;
    char grade;

    
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);
    printf("Enter assignment score (out of 100): ");
    scanf("%d", &assignment);
    printf("Enter exam score (out of 100): ");
    scanf("%d", &exam);

    
    if (attendance >= 75) {
        if (assignment >= 50) {
            if (exam >= 50) {
                if (exam >= 90) {
                    grade = 'A';
                } else if (exam >= 80) {
                    grade = 'B';
                } else if (exam >= 70) {
                    grade = 'C';
                } else if (exam >= 60) {
                    grade = 'D';
                } else {
                    grade = 'E';
                }
            } else {
                grade = 'F'; 
            }
        } else {
            grade = 'F'; 
        }
    } else {
        grade = 'F'; 
    }

    
    printf("Final Grade: %c\n", grade);

    return 0;
}