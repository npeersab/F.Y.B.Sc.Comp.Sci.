#include <stdio.h>

int main() {
	int i, j, n;
	char ch = 'A';

	printf("Enter n: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++)
			printf("%c\t", ch++);
		printf("\n");
	}

	return 0;
}
