#include <stdio.h>
int main()
{
    char a;
    printf("enter any character:\n");
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
    {
        printf("the entered charater is lower case case!\n");
        return 1;
    }
    else if (a >= 65 && a <= 90)
    {
        printf("the entered charater in upper case!\n");
        return 1;
    }
    else if (a >= 48 && a <= 56)
    {
        printf("the entered charater is a digit!\n");
        return 1;
    }
    else
    {
        printf("you entered the special charater\n");
    }
    return 0;
}