#include <stdio.h>

int main() {
	float b_sal, tax;

	printf("Enter annual basic salary : ");
	scanf("%f", &b_sal);

	if (b_sal < 150000)
		tax = 0;
	else if (b_sal < 300000)
		tax = b_sal * 0.2;
	else
		tax = b_sal * 0.3;

	printf("\nIncome tax : %.2f\n", tax);

	return 0;
}
	
