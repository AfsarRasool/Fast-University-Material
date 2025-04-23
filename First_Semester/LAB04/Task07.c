/*An android developer wants to design a mobile feature to control the brightness of the mobile phone according to the surrounding light. 
In order to do it he uses an ambient light sensor (for the detection of surrounding light) 
which is commonly built in in all major android phones. 
It gives the value of light intensity in integers.
 Write a C program for Light sensor value ranges from 0-1000, 
 if it’s exposed under sunshine (>500),
  if it’s evening then (0 ~ 100),
   lighting (100 to 500). */
#include<stdio.h>

int main()
{ int brightness;
    printf("Enter Brightness:");
    scanf("%d",&brightness);
    if(brightness>500&& brightness<=1000)
    printf("under the sunlight");
    else if(brightness<=500&& brightness> 100)
    printf("under ordinary light");
    else if(brightness<=100 && brightness>0) 
    printf("under diffused sunlight");
    return 0;
}