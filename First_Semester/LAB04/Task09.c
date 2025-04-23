/*Write a program in which user enters his NTS and F.Sc marks and your
program will help student in selection of university. Based on these marks
Student will be allocated a seat at different department of different university.
a. Oxford University:
i. IT: Above 70% in Fsc. And 70 % in NTS
ii. Electronics: Above 70% in Fsc. And 60 % in NTS
iii. Telecomunication: Above 70% in Fsc. And 50 % in NTS
b. MIT:
i. IT: 70% - 60 % in Fsc. And 50 % in NTS
ii. Chemical: 59% – 50 % in Fsc. And 50 % in NTS
iii. Computer: Above 40% and below 50 % in Fsc. And 50 % in NTS*/

#include <stdio.h>
int main() {
    float mfsc,nts;
    printf("Enter your Fsc Marks:");
    scanf("%f",&mfsc);
    printf("Enter your Nts Marks:");
    scanf("%f",&nts);
    if((mfsc/1100.0)*100>=70 && (nts/100.0)*100>=70)
        printf("you are eligible for IT at Oxford\n");
    if((float)(mfsc/1100)*100>=70 && (nts/100)*100>=60)
        printf("you are eligible for Electronics at Oxford\n");
    if((mfsc/1100)*100>=70 && (nts/100)*100>=50)
        printf("you are eligible for Telecommunication at Oxford\n");
    if((mfsc/1100)*100>=70 || (mfsc>=60) && (nts/100)*100>=50)
        printf("you are eligible for IT at MIT\n");
    if((mfsc/1100)*100>=59 || (mfsc>=50) && (nts/100)*100>=50)
        printf("you are eligible for Chemical at MIT\n");
    if((mfsc/1100)*100>=40 || (mfsc<=50) && (nts/100)*100>=50)
        printf("you are eligible for Computer at MIT\n\n");
        main();
        return 0;
}