#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, d1, n2, d2, n3, d3, choice;

	printf("Enter fraction 1:\n");
	printf("Numerator: ");
	scanf("%d", &n1);
	printf("Denominator: ");
	scanf("%d", &d1);

	printf("Enter fraction 2:\n");
	printf("Numerator: ");
	scanf("%d", &n2);
	printf("Denominator: ");
	scanf("%d", &d2);

	// in all 3 conditions the denominator will same i.e. multiplication of both denominators
	d3 = d1 * d2;

	do {
		printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Exit\nEnter your choice: ");
		scanf("%d",  &choice);

		switch (choice) {
		case 1:
			n3 = n1 * d2 + n2 * d1;
			printf("Addition: %d / %d", n3, d3);
			break;
		case 2:
			n3 = n1 * d2 - n2 * d1;
			printf("Subtraction: %d / %d", n3, d3);
			break;
		case 3:
			n3 = n1 * n2;
			printf("Multiplication: %d / %d", n3, d3);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid choice");
		}
		printf("\n");
	} while (1);

	return 0;
}
