#include <stdio.h>
int main() {
int a = 5; // binary: 0101
int b = 9; // binary: 1001
printf("a & b = %d\n", a & b); // AND operation
printf("a | b = %d\n", a | b); // OR operation
printf("a ^ b = %d\n", a ^ b); // XOR operation
printf("~a = %d\n", ~a ); // NOT operation
return 0;
}