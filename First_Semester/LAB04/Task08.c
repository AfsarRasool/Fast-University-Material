/*Write a program to see greetings according to time using a 24-hour format.
 If the time between is 5 to 11 it should greet “Good Morning”,
  if time is between 12 to 18 it should greet “Good Evening”, 
  if time between 18 to 24 it should greet “Good Night”.*/ 
  #include<stdio.h>
  int main(){
  int time;
  printf("Enter Hour (0-23):");
  scanf("%d",&time);
  if(time>=5&&time<11)
  printf("Good Morning!\n");
  if(time >=11&&time<18)
  printf("Good Evening\n");
  if(time>=18&&time<23)
  printf("Good Night\n");
  main();
  return 0;
  }