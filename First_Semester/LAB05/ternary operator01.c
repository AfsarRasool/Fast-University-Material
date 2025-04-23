/*1. Write a program using a ternary operator to find the maximum of two numbers.*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number :\n");
    scanf("%d", &a);
    printf("Enter another number :\n");
    scanf("%d", &b);
    (a > b) ? printf("%d is greter than %d\n", a, b) : printf("%d is greter than %d\n", b, a);

    return 0;
}