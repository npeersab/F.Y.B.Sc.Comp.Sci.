#include <stdio.h>

int main() {
	int a = 1, b = 1, c, n;

	printf("Enter n: ");
	scanf("%d", &n);

	while (n > 0) {
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("\n");
	return 0;
}
