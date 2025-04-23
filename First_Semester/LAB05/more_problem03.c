/*Create a program that determines if a number is positive, negative, or zero, and if it’s positive,
checks if it’s an even or odd number.*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a Number :");
    scanf("%d",&number);
    if (number>0){
    printf("It is a Positive Number \n");
    
    if (number%2==0)
    {
       printf("It is an Even Number\n");
    }

    else{
    printf("it is a odd number \n");}
    }
    else if (number<0)
    {
        printf("It is a negative number\n");
    }
    else
    printf("YOU ENTERED A ZERO\n");
    
    return 0;

    
    }
   
   
    
