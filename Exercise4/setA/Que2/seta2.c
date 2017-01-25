#include <stdio.h>

int main() {
	int x, y, sum = 0;

	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	
	while (x <= y)
		sum += x++;

	printf("Sum: %d\n", sum);
	return 0;
}
