#include <stdio.h>

int main() {
	float l, b, h;

	printf("Enter dimensions of cuboid :\n");
	printf("Enter length : ");
	scanf("%f", &l);
	printf("Enter breadth : ");
	scanf("%f", &b);
	printf("Enter height : ");
	scanf("%f", &h);

	printf("\nSurface area : %.2f\n", 2 * (l * b + l * h + b * h));
	printf("Volume : %.2f\n", l * b * h);
	
	return 0;
}
