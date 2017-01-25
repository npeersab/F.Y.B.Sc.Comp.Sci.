#include <stdio.h>

int main() {
	int n, sum = 0, digits = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (n > 0) {
		sum += n % 10;
		n /= 10;
		digits++;
	}

	printf("Digits: %d\nSum: %d\n", digits, sum);
	return 0;
}
