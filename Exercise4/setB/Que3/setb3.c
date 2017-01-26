// compile using 'gcc setb3.c -lm' OR 'gcc -lm setb3.c'

#include <stdio.h>
#include <math.h>

int main() {
	int x, n, i;
	float result = 0;

	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result += i / pow(x, i);

	printf("Sum: %f\n", result);
	return 0;
}
