#include <stdio.h>
#define PI 3.14

int main() {

	float rad, hei;

	printf("Enter radius of the cylinder : ");
	scanf("%f", &rad);
	printf("Enter height of the cylinder : ");
	scanf("%f", &hei);
	
	printf("\nSurface area : %.2f sq. unit\n", 2 * (PI * rad * rad + PI * rad * hei));
	printf("Volume : %.2f sq. unit\n", PI * rad * rad * hei);

	return 0;

}
	
