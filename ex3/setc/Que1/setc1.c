#include <stdio.h>

int main() {
	int day, month, year;

	printf("Enter day: ");
	scanf("%d", &day);
	printf("Enter month: ");
	scanf("%d", &month);
	printf("Enter year: ");
	scanf("%d", &year);

	// date cannot be negative
	if (year < 0 || day < 0) {
		printf("Invalid date");
	}
	else {
		switch (month) {
		// months with 31 days
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day > 31)
				printf("Invalid date");
			else
				printf("Valid date");
			break;
		// months with 30 days
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > 30)
				printf("Invalid date");
			else
				printf("Valid date");
			break;
		// for february month
		case 2:
			if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
				if (day > 29)
					printf("Invalid date");
				else
					printf("Valid date");
			}
			else {
				if (day > 28)
					printf("Invalid date");	
				else
					printf("Valid date");
			}
			break;
		default:
			printf("Invalid date");
		}
		
	}

	printf("\n");
	return 0;
}
