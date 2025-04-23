/*4. Develop a program that uses logical operators to
 determine if a person is eligible for a loan 
based on age, income, and credit score.*/
#include<stdio.h>

int main()
{ int salary,credit_r,age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your your credit score:");
    scanf("%d",&credit_r);
    printf("Enter Your monthly Salary:");
    scanf("%d",&salary);
    if((age>=21&&age<65)&&credit_r>=650&&salary>=50000)
    printf("You are eligible For Loan");
    else{
    printf("You are Not eligible For Loan!\n");
    printf("Criteria For loan is given Below\n");
    printf("Age Should be 21 To 65\n");
    printf("credit Score should be Greater or equal to 650\n");
    printf("salary should be Greater than 50K\n");
    }
    main();
    return 0;
}