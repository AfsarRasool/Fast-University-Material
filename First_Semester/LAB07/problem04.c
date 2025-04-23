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

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int count[n]; 

    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    for(int i = 0; i < n; i++) {
        count[i] = 0;
    }

    
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    
    for(int i = 0; i < n; i++) {
        if(count[i] > 1) {
            printf("Number %d occurs more than once\n", i);
        }
    }

    return 0;
}
