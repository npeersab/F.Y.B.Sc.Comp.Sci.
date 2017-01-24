#include <stdio.h>

int main() {
	int a, b, c;

	printf("Enter three numbers :\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if ((a < b && a > c) || (a > b && a < c))
		printf("\n%d is between %d and %d\n", a, b, c);
	else
		printf("\n%d is not between %d and %d\n", a, b, c);

	return 0;
}
