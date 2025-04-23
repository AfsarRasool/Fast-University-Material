/*2. Create a program that checks if a person is eligible to vote based on their age and citizenship
status.*/
#include <stdio.h>
int main()
{
    int age;
    char citizen;
    printf("Enter your age :\n");
    scanf("%d", &age);
    getchar();
    printf("Are you a Citizen (y/n)\n");
    scanf("%c", &citizen);
    if (age >= 18 && citizen == 'y')
    {
        printf("You are Eligible for Vote\n");
    }
    else
    {
        printf("You are not Eligible for vote\n");
    }
}