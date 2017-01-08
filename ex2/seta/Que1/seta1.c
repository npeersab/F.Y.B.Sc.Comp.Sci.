#include <stdio.h>

int main() {
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);
	
	// modulo operator gives 0 if operand 1 is divisible bye operand 2
	if (n % 2 == 0)
		printf("\n%d is even\n", n);
	else
		printf("\n%d is odd\n", n);
	
	return 0;
}
