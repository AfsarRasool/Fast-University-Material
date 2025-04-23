/*5. A weather station records temperature in an array over the course of a week (7 days). Write a
program that calculates the average temperature of the week and identifies if any days had
extreme temperatures (above 40°C or below 0°C).
Example Input: {25, 30, -2, 35, 42, 28, 10}
Example Output: Average temperature: 24.0°C, Extreme temperatures on day 3 and day 5*/

#include<stdio.h>
int main(){
    int i,avg,sum=0,day1,day2;
int a[]={25, 30, -2, 35, 42, 28, 10};
int max=a[0];
int min=a[0];
int count=sizeof(a)/4;
for (  i = 0; i <count ; i++)
{   sum=sum+a[i];
    if (a[i]<min)
    {
        min=a[i];
      day1=i+1;
    }
    else if (a[i]>max)
    {
        max=a[i];
        day2=i+1;
    }
    
}
avg=sum/count;
printf("Average Temperature :%d C, Extreme tempreture on Day %d and %d \n",avg,day1,day2);


}