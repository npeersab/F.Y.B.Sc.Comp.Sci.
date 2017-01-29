// compile using 'gcc seta2.c -lm' OR 'gcc -lm seta2.c'

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int choice = 0, n;
	float x;

	while (1) {
		printf("1. Power\n2. Square Root\n3. Floor\n4. Ceiling\n5. Exit\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Enter x: ");
			scanf("%f", &x);
			printf("Enter n: ");
			scanf("%d", &n);
	
			printf("x ^ n: %.2f", pow(x, n));
			break;
		case 2:
			printf("Enter a number: ");
			scanf("%f", &x);
			printf("Square Root: %.2f", sqrt(x));
			break;
		case 3:
			printf("Enter a number: ");
			scanf("%f", &x);
			printf("Floor: %.2f", floor(x));
			break;
		case 4:
			printf("Enter a number: ");
			scanf("%f", &x);
			printf("Ceiling: %.2f", ceil(x));
			break;
		case 5:
			exit(0);
		default:
			printf("Invalid choice");
		}
		printf("\n\n");
	}
	return 0;
}
