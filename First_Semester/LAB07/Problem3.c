/*4. Given an array arr[] of size N which contains elements from 0 to N-1, you need to find all the
elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=2
Element 2=3
Element 3=1
Element 4=2
Element 5=3
Output:
Number 2 and 3 in array occur more than once.
Note: You cannot utilize nested loops.*/
#include<stdio.h>

int main() {
    int size;

    printf("How Many Numbers are you going to put:\n");
    scanf("%d", &size);

    int input[size];
    int count[size]; // Array to keep track of occurrences

    // Initialize the count array to 0
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    // Read input numbers
    for (int i = 0; i < size; i++) {
        printf("Enter %d Number: ", i + 1);
        scanf("%d", &input[i]);
        count[input[i]]++; // Increment the count for the input number
    }

    printf("Numbers occurring more than once:\n");
    for (int i = 0; i < size; i++) {
        if (count[i] > 1) {
            printf("%d occurs %d times\n", i, count[i]);
        }
    }

    return 0;
}
