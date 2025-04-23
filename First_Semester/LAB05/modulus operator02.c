#include<stdio.h>
int main(){
    int number;
    int sum=0;
    printf("Enter a Number\n");
    scanf("%d",&number);
    for (int i = 0; number !=0; i++)
    {
        sum =sum+(number%10);
        number=number/10;
    }
    printf("the sum of given number's digits is %d\n",sum);
    return 0;
}  