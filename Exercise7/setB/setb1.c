#include <stdio.h>

int isPrime(int);

int main() {
	int i, n;

	printf("First 10 prime numbers: ");
	for (i = 0, n = 1; i < 10; n++)
		if (isPrime(n)) {
			printf("%d ", n);
			i++;
		}
	printf("\n");
	return 0;
}

int isPrime(int n) {
	int i;
	
	for (i = 2; i < n; i++)
		if (!(n % i))
			return 0;
	return 1;
}
