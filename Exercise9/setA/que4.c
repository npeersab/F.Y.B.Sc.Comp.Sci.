#include <stdio.h>

int main() {
	int prime[20], size;
	int acceptPrime(int [], int);
	void display(int array[], int);

	printf("How many numbers?: ");
	scanf("%d", &size);
	size = acceptPrime(prime, size);

	printf("Prime numbers are:\n");
	display(prime, size);
	printf("\n");
	return 0;
}

int acceptPrime(int prime[], int size) {
	int i, buff, k = 0;
	int isPrime(int);

	for (i = 0; i < size; i++) {
		scanf("%d", &buff);
		if (isPrime(buff))
			prime[k++] = buff;
	}

	return k;
}

int isPrime(int num) {
	int i;

	for (i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

void display(int array[], int size) {
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
}
