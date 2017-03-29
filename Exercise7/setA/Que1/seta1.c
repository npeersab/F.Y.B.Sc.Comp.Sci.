#include <stdio.h>

int isEven(int);

int main() {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (isEven(n))
		printf("Even number\n");
	else
		printf("Odd number\n");

	return 0;
}

int isEven(int n) {
	return !(n % 2);
}
