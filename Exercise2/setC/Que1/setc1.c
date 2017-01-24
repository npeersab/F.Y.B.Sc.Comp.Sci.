#include <stdio.h>

int main() {
	float r1, r2, r3, amt, dis;
	int q1, q2, q3;

	printf("Item 1 :\nQuantity : ");
	scanf("%d", &q1);
	printf("Rate : ");
	scanf("%f", &r1);
        printf("Item 2 :\nQuantity : ");
        scanf("%d", &q2);
        printf("Rate : ");
        scanf("%f", &r2);
        printf("Item 3 :\nQuantity : ");
        scanf("%d", &q3);
        printf("Rate : ");
        scanf("%f", &r3);

	printf("\nTotal Amount : %.2f", amt = q1 * r1 + q2 * r2 + q3 * r3);
	
	if (amt > 1000)
		dis = amt* 0.2;
	else if (amt > 500)
		dis = amt * 0.15;
	else if (amt > 200)
		dis = amt * 0.8;
	else 
		dis = 0;
	
	printf("\nDiscount : %.2f\n", dis);

	return 0;
}

