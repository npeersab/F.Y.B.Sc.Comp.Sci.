#include <stdio.h>

int main() {
	int i, j, sum;

	printf("Perfect numbers below 500: ");
	for (i = 1; i < 501; i++) {
		for (j = 2, sum = 1; j < i; j++)
			if (i % j == 0)
				sum += j;

		if (sum == i)
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}
