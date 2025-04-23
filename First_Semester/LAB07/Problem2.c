/*Write a C Program to find the minimum and maximum number in an array.
Input: {4,1,6,8,10,21,8,9,2,6}
Output:
Minimum Number = 1
Maximum Number = 21*/

#include <stdio.h>
int main(){ int max,min;

    int a[]={4,1,6,8,10,21,8,9,2,6};
    max=a[0];
    min=a[0];
    int count=sizeof(a)/4;
    for (int i = 0; i < count; i++)
    {
       if (a[i]<min)
       {
        min=a[i];
       }
       else if (a[i]>max)
       {
         max=a[i];
       }
       
        
    }
     printf("%d is max in this sequence\n %d is minimum is this sequence",max,min);
     
    return 0;
}