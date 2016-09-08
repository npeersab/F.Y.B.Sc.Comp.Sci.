#include <stdio.h>
#include <math.h>

int main() {

	float x1, x2, y1, y2;

	printf("Enter co - ordinates of point 1 :\n");
	scanf("%f%f", &x1, &y1);
	printf("Enter co - ordinates of point 2 :\n");
	scanf("%f%f", &x2, &y2);

	printf("\nDistance between the points is %.2f unit\n", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));

	return 0;
}
