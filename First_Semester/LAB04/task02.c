#include <stdio.h>
int main()
{
    char operator;
    int num1, num2, result;
    printf("enter a operator that you want to perform (+,- etc.):");
    scanf("%c", &operator);
    switch (operator)
    {
    case '+':
        printf("enter 1st number:");
        scanf("%d", &num1);
        printf("enter 2nd number:");
        scanf("%d", &num2);

        result = num1 + num2;
        printf("the sum of entered number is %d", result);
        break;
    case '-':
        printf("enter 1st number:");
        scanf("%d", &num1);
        printf("enter 2nd number:");
        scanf("%d", &num2);

        result = num1 - num2;
        printf("the subtraction of entered number is %d", result);
        break;
    case '/':
        printf("enter 1st number:");
        scanf("%d", &num1);
        printf("enter 2nd number:");
        scanf("%d", &num2);

        if (num2 == 0)
        {
            printf("please enter number 2 greater than 0");
            return 1;
        }
        else
        {
            result = num1 / num2;
            printf("the division of entered number is %d", result);
            break;
        }
    case '*':
        printf("enter 1st number:");
        scanf("%d", &num1);
        printf("enter 2nd number:");
        scanf("%d", &num2);
        result = num1 * num2;
        printf("the sum of entered number is %d", result);
        break;

        case '%':
        printf("enter 1st number:");
        scanf("%d", &num1);
        printf("enter 2nd number:");
        scanf("%d", &num2);
        result = num1 % num2;
        printf("the module of entered number is %d", result);
        break;
    }
    return 0;
    getche();
}
