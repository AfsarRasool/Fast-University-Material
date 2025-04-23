#include <stdio.h>
int main()
{
    float actual_amount, saved_amount, discounted;
     actual_amount=5000.0;
    
    if (actual_amount >= 500 && actual_amount < 2000)
    {
        saved_amount = actual_amount * (5 / 100.0);
        discounted = actual_amount - saved_amount;
        printf("you had to pay %.2f\n", actual_amount);
        printf("you saved %.2f Ruppes..!\n", saved_amount);
        printf("you have to pay after 5 percent discount is %.2f \n", discounted);
    }
    else if (actual_amount >= 2000 && actual_amount < 4000)
    {
        saved_amount = actual_amount * (10 / 100.0);
        discounted = actual_amount - saved_amount;
        printf("you had to pay %.2f\n", actual_amount);
        printf("you saved %.2f Ruppes..!\n", saved_amount);
        printf("you have to pay after 10 percent discount is %.2f \n", discounted);
    }
    else if (actual_amount >= 4000 && actual_amount < 6000)
    {
        saved_amount = actual_amount * (20 / 100.0);
        discounted = actual_amount - saved_amount;
        printf("you had to pay %.2f\n", actual_amount);
        printf("you saved %.2f Ruppes..!\n", saved_amount);
        printf("you have to pay after 20 percent discount is %.2f \n", discounted);
    }
    else if (actual_amount >= 6000)
    {
        saved_amount = actual_amount * (35 / 100.0);
        discounted = actual_amount - saved_amount;
        printf("you had to pay %.2f\n", actual_amount);
        printf("you saved %.2f Ruppes..!\n", saved_amount);
        printf("you have to pay after 35 percent discount is %.2f \n", discounted);
    }
    return 0;
}