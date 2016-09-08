#include <stdio.h>

int main() {

	int year;

	printf("Enter year : ");
	scanf("%d", &year);

	if((!(year % 4) && year % 100) || !(year % 400))
		printf("\n%d is a leap year\n", year);
	else
		printf("\n%d is not a leap year\n", year);

	return 0;
}
