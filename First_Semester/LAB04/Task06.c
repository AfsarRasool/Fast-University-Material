/*6. Given a positive integer denoting n, do the following:
 a. If 1<=n<=9, print lowercase English words corresponding to the numbers e.g. (one for 1, two for 2)
  b. B. If n>9 print greater then 9 */
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:

        printf("One");

        break;

    case 2:

        printf("Two");

        break;

    case 3:

        printf("Three");

        break;

    case 4:

        printf("Four");

        break;

    case 5:

        printf("Five");

        break;

    case 6:

        printf("Six");

        break;

    case 7:

        printf("Seven");

        break;

    case 8:

        printf("Eight");

        break;

    case 9:

        printf("Nine");

        break;
    default:
        printf("the number is greater than 9");
    }
    return 0;
}