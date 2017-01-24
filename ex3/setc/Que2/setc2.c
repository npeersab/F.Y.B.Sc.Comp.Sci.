#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, den1, num2, den2, num3, den3, choice;

	printf("Enter fraction 1:\n");
	printf("Numerator: ");
	scanf("%d", &num1);
	printf("Denominator: ");
	scanf("%d", &den1);
	
	printf("Enter fraction 2:\n");
	printf("Numerator: ");
	scanf("%d", &num2);
	printf("Denominator: ");
	scanf("%d", &den2);

	printf("1. Addition\n2. Subtraction\n3. Multiplication\nEnter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		num3 = num1 * den2 + num2 * den1;
		den3 = den1 * den2;
		break;
	case 2:
		num3 = num1 * den2 - num2 * den1;
		den3 = den1 * den2;
		break;
	case 3:
		num3 = num1 * num2;
		den3 = den1 * den2;
		break;
	default:
		printf("Invalid Choice\n");
		exit(1);
	}

	printf("Result: %d \\ %d\n", num3, den3);
	return 0;
}
