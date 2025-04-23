/*10. Write a C program that takes the temperature as input from the user and 
prints a message based on the temperature range:
a. Temperature < 0: “Freezing weather”
b. 0 to 10: “Very cold weather”
c. 1 to 20: “Cold weather”
d. 1 to 30: “Normal temperature”
e. 1 to 40: “Hot weather”
f. 40: “Very hot weather”*/
#include<stdio.h>
int main(){
int temp;
   printf("Enter the Temperature in centigrade:");
   scanf("%d",&temp);
   if(temp<=0){
   printf("Freezing weather");}
   else if(temp>0 && temp<=10){
   printf("Very cold weather");}
   else if(temp>10 && temp<=20){
   printf("cold weather");}
   else if(temp>20 && temp<=30){
   printf("normal temperature");}
   else if (temp>30 && temp<=40){
   printf("hot weather");}
   else if (temp>40){
   printf("very hot weather");}
    return 0;
}