/*Question#6
Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format specifiers to
cap the result to 3 decimal places.*/

#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, slope;
    printf("enter the value of x1:");
    scanf("%d", &x1);
    printf("enter the value of x2:");
    scanf("%d", &x2);
    printf("enter the value of y1:");
    scanf("%d", &y1);
    printf("enter the value of y2:");
    scanf("%d", &y2);
    slope = (y2 - y1) / (x2 - x1);
    printf("the slope of the line is %d\n", slope);
}