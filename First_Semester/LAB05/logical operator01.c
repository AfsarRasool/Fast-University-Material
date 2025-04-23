/*1. Write a program that checks if a number is divisible by both 3 and 5 using logical operators.*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if (number%3==0 && number%5==0)
    {
        printf("it is divisible by both 5 and 3\n");
        
    }
    else
    printf("it is not divisible by both 5 and 3\n");
    return 0;
    
    
}