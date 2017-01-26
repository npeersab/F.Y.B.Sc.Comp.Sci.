#include <stdio.h>

int main() {
	int x, n, i, sum = 0;

	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		sum += (i * 2 + 1) * x;

	printf("Sum: %d\n", sum);
	return 0;
}
