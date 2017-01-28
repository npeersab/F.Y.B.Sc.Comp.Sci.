// note: compile using 'gcc setc2.c -lm' OR 'gcc -lm setc2.c'

#include <stdio.h>
#include <math.h>

int main() {
	int n, x, a, i, sum = 0;

	printf("Enter number of terms: ");
	scanf("%d", &n);
	printf("Enter x: ");
	scanf("%d", &x);

	for (i = 0; i < n; i++) {
		printf("Enter coefficient %d: ", i + 1);
		scanf("%d", &a);

		sum += a * pow(x, i);
	}

	printf("Value of polynomial: %d\n", sum);
	return 0;
}
