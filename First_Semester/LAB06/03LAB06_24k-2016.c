#include <stdio.h>
int main(){ int n, i,prime_no;
int t1 = 0, t2 = 1, nextTerm = 0;
	printf("Enter a number to check whether it is a prime or not: \t");
	scanf("%d",&n);
	if(n==0 || n==1){
		prime_no=1;
	}
	for(i=2;i!=n;i++){
		if(n%i==0 && n!=2){
			prime_no=1;
			break;
		}
	}
	if(prime_no)
	printf("the given no is not a prime\n");
	else{
		printf("the given number is a prime\n");
		
		 printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
	}
	main();
	return 0;
}