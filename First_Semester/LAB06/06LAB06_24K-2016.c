#include<stdio.h>
int main(){
    int i=0;
   do
   {
    if (i==0 || i==5)
    {
      printf("*       *\n");
        
    }
    else if (i>0&& i<5)
    {
        printf("* * * * *\n");
        
    }
    i++;
   } while ( i <6);
   
    return 0;
}