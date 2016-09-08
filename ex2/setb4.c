#include <stdio.h>

int main() {

	float cp, sp;

	printf("Enter cost price : ");
	scanf("%f", &cp);
	printf("Enter selling price : ");
	scanf("%f", &sp);

	if(cp > sp)
		printf("Loss : %.2f\n", cp - sp);
	else
		printf("Profit : %.2f\n", sp - cp);

	return 0;
}
