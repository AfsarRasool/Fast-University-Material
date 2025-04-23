/*QUESTION#5
Construct a C program with the flowchart below. The input value of the principle must be between 100
Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.*/
#include <stdio.h>
int main()
{
    int principle, rate_interest, time_period,payable_interest,returnable_amount;
    printf("Enter the vlaue you need: ");
    scanf("%d", &principle);
    printf("enter the percent of interest(5 to 10 percent ) at which you want to borrow:");
    scanf("%d", &rate_interest);
    printf("Enter the time period in which you can return:");
    scanf("%d", &time_period);
    if (principle < 100 && principle > 1000000)
    {
        printf("please enter amount between 100 to 10 Lac\n");
        if (rate_interest < 5 && rate_interest > 10)
        {
            printf("please enter interest between 5 to 10 percent\n");
        }
        else if (time_period < 1 && time_period > 10)
        {
            printf("please enter the time period between 1 to 10 years\n");
        }
    }
    else
    {
        payable_interest=(principle*rate_interest*time_period)/100;
        returnable_amount=payable_interest+principle;

        printf("With it you have to pay total interest is %d\n",payable_interest);
        printf("The total amount you have to pay after %d year is %d\n",time_period,returnable_amount);
    }
    return 0;
}