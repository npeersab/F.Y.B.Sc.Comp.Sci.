#include <stdio.h>

int main() {

	int days, fine;

	printf("Enter late days count : ");
	scanf("%d", &days);

	if(days < 6)
		fine = 10;
	else if(days < 11)
		fine = 50;
	else
		fine = 100;
	
	printf("\nFine : %d\n", fine);
}
