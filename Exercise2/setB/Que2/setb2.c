#include <stdio.h>

int main() {
	float x, y;

	printf("Enter x co-ordinate : ");
	scanf("%f", &x);
	printf("Enter y co-ordinate : ");
	scanf("%f", &y);

	if (x > 0) {
		if(y > 0)
			printf("Point lies in Quadrant I\n");
		else if(y < 0)
			printf("Point lies in Quadrant II\n");
	}
	else if (x < 0) {
		if (y > 0)
			printf("Point lies in Quadrant III\n");
		else if (y < 0)
			printf("Point lies in Quadrant IV\n");
	}
	else
		printf("Point lies on axis\n");
	
	return 0;
}
		
