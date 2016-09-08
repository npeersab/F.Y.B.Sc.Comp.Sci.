#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c;
	float root1, root2;

	printf("Enter value for a : ");
	scanf("%d", &a);
        printf("Enter value for b : ");
        scanf("%d", &b);
        printf("Enter value for c : ");
        scanf("%d", &c);

	printf("\nRoot 1 : %.2f", (-b + sqrt(b * b - 4 * a * c)) / 2 * a);
	printf("\nRoot 2 : %.2f\n", (-b - sqrt(b * b - 4 * a * c)) / 2 * a);

	return 0;
}

	

