#include <stdio.h>

int main() {

	float rm_l, rm_b, rm_h, dr_h, dr_b, wd_h, wd_b, area_p, area_w;

	printf("Enter room's dimensions :\n");
	printf("Enter length : ");
	scanf("%f", &rm_l);
	printf("Enter height : ");
	scanf("%f", &rm_h);
	printf("Enter breadth : ");
	scanf("%f", &rm_b);

	printf("\nEnter door's dimensions :\n");
	printf("Enter height : ");
	scanf("%f", &dr_h);
	printf("Enter breadth : ");
	scanf("%f", &dr_b);
	
	printf("\nEnter Window's dimemsions :\n");
	printf("Enter height : ");
	scanf("%f", &wd_h);
	printf("Enter breadth : ");
	scanf("%f", &wd_b);

	area_p = 2 * (rm_h * rm_b + rm_l * rm_h) + rm_l * rm_b - 2 * wd_h * wd_b - dr_h * dr_b;
	area_w = rm_l * rm_b;

	printf("\nArea to be printed : %.2f\n", area_p);
	printf("Area to be whitewashed : %.2f\n", area_w);

	return 0;
}
