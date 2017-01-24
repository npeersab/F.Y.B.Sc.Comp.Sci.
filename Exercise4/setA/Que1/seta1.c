#include <stdio.h>

int main() {
	int n, i;

	printf("Enter limit: ");
	scanf("%d", &n);

	printf("Even numbers upto %d: ", n);
	for (i = 2; i < n; i++)
		if (i % 2 == 0)
			printf("%d ", i);

	printf("\n");

	return 0;
}
