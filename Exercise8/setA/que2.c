#include <stdio.h>

int main() {
	int a, b;
	int gcd(int, int);

	printf("Enter number 1: ");
	scanf("%d", &a);
	printf("Enter number 2: ");
	scanf("%d", &b);

	printf("GCD: %d\n", gcd(a, b));
	return 0;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else return gcd(b, a % b);
}
