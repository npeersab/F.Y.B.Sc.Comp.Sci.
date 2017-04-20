#include <stdio.h>

int main() {
	int x, y;
	int power(int, int);

	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);

	printf("x^y: %d\n", power(x, y));
	return 0;
}

int power(int x, int y) {
	if (y == 0)
		return 1;
	else 
		return x * power(x, --y);
}
