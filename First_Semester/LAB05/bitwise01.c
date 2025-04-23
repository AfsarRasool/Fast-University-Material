#include<stdio.h>

int main()
{ int a,b;
printf("Enter first Number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);

printf("Before swap a=%d and b=%d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("After swap a=%d and b=%d\n",a,b);
    return 0;
}