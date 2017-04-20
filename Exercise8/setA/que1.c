#include <stdio.h>

int main() {
	int n;
	int recSum(int);

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum of digits: %d\n", recSum(n));
	return 0;
}

int recSum(int x) {
	if (x < 10)
		return x;
	else
		return x % 10 + recSum(x / 10);
}
