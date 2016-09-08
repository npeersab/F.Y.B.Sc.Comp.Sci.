#include <stdio.h>

int main() {

	int a, b;

	printf("Enter two numbers :\n");
	scanf("%d%d", &a, &b);

	printf("\nArithmatic mean : %d\n", (a + b) / 2);
	printf("Harmonic meam : %d\n", (a * b) / (a + b));
	return 0;
}
