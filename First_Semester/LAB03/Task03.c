/*QUESTION#3
A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from
the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after
paying the tax. This information is then provided to the user.*/
#include <stdio.h>
int main()
{
    float salary, net_salary, tax;
    int tax_rate;
    printf("enter your salary: ");
    scanf("%f", &salary);
    printf("enter your enter taxes in percent: ");
    scanf("%d", &tax_rate);
    tax = salary * ((float)tax_rate / 100);
    net_salary = salary - tax;
    printf("your net salary is %.2f\n", net_salary);
    printf("the tax is %.2f\n", tax);
    return 0;
}
