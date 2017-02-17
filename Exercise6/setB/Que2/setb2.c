// compile with 'gcc setb2.c -lm' OR gcc -lm setb2.c'

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int x1, x2, y1, y2, choice;

	printf("Enter co-ordinates of point 1:\n");
	printf("Enter x: ");
	scanf("%d", &x1);
	printf("Enter y: ");
	scanf("%d", &y1);

	printf("Enter co-ordinates of point 2:\n");
	printf("Enter x: ");
	scanf("%d", &x2);
	printf("Enter y; ");
	scanf("%d", &y2);

	while (1) {
		printf("\n1. Distance between points\n2. Slope of lines between points\n3. Check whether they lie in the same quadrant\n4. Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				printf("Distance between points: %.4f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
				break;
			case 2:
				printf("Slope of line: %.4f", ((float) (y2 - y1)) / (x2 - x1));
				break;
			case 3:
				if ((x1 < 0 && x2 < 0) || (x1 > 0 && x2 > 0)) {
					if ((y1 < 0 && y2 < 0) || (y1 > 0 && y2 > 0))
						printf("Points lies in same quadrant");
					else
						printf("Points lies in different quadrants");
				}
				else
					printf("Points lies in different quadrants");
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice");
		}
		printf("\n");
	}

	return 0;
}
