#include <stdio.h>

int main() {
	int a, x, y, q, r, n;

	printf("Enter 2 Numbers:\n");
	scanf("%d%d", &x, &y);
	printf("\n1.Equality\n2.Less than\n3.Quotient and remainder\n4.Range\n5.Swap\nEnter an option: ");
	scanf("%d", &a);

	switch (a) {
		case 1:
			if (x == y)
				printf("x is equal to y");
			else
				printf("x is not equal to y");
			break;
		case 2:
			if(x < y)
				printf("x is less than y");
			else
				printf("x is not less than y");
			break;
		case 3:
			q = x / y;
			r = x % y;
			printf("Quotient is %d remainder is %d", q, r);
			break;
		case 4:
			printf("Enter a number");
			scanf("%d", &n);
			if((n >= x && n <= y) || (n <= x && n >= y))
				printf("Entered numbers is between %d and %d", x, y);
			else
				printf("Entered numbers is not between %d and %d", x, y);
			break;
		case 5:
			y = x + y;
			x = y - x;
			y = y - x;
			printf("After swapping\nx is %d y is %d", x, y);
			break;
		default:
			printf("Invalid Option");

	}
	printf("\n");
}
