// file inclusion to use printf and scanf
#include <stdio.h>

int main() {
	// variable declaration
	float radius, height, surface_area, volume;

	// read radius
	printf("Enter radius of the cylinder : ");
	scanf("%f", &radius);

	// read height
	printf("Enter height of the cylinder : ");
	scanf("%f", &height);
	
	// calculate surface area
	surface_area = 2 * (3.14 * radius * radius + 3.14 * radius * height);

	// calculate volume
	volume = 3.14 * radius * radius * height;

	// display surface area and volume
	printf("\nSurface area : %.2f sq. unit\n", surface_area);
	printf("Volume : %.2f sq. unit\n", volume);

	return 0;
}
	
