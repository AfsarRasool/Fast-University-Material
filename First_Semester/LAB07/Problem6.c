/*6. You are developing a user input validation system for a registration form. The form requires
the user to input their name and phone number. Validate the inputs with the following rules:
Name: Can only contain alphabetic characters (A-Z, a-z), spaces.
Phone Number: Can contain digits (0-9), spaces, hyphens (-), and an optional plus sign (+) at
the beginning.*/
#include<stdio.h>
int main(){
char name[15];
char phone[16];

printf("Enter Your Name: ");
scanf("%s", name);
printf("Enter Phone Number: ");
scanf("%s",phone);
 int countf = sizeof(phone)/4;
for (int i = 0; name[i] != '\0'; i++) {
        if (!(name[i] >= 'A' && name[i] <= 'Z') && 
            !(name[i] >= 'a' && name[i] <= 'z') && 
            name[i] != ' ') {
            printf("Invalid character '%c' in name. Only uppercase, lowercase, and space allowed.\n", name[i]);
        }
    }
for (int j = 0; j < countf; j++)
{
    if (!(phone[j]>= 0 && phone[j]<=9) &&
         !(phone[j]==' ' && phone[j]=='-' && phone[j]=='+'))
    {
        printf("Wrong\n");
        
    }
    
}
return 0;

}