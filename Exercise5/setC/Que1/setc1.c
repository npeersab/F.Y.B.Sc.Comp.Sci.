#include <stdio.h>

int main() {
	int north = 0, south = 0, east = 0, west = 0, i, temp;

	for (i = 0; i < 3; i++) {
		printf("\nEnter sales for North branch: ");
		scanf("%d", &temp);
		north += temp;

		printf("Enter sales for South branch: ");
		scanf("%d", &temp);
		south += temp;

		printf("Enter sales for East branch: ");
		scanf("%d", &temp);
		east += temp;

		printf("Enter sales for West branch: ");
		scanf("%d", &temp);
		west += temp;
	}

	printf("\nAverage sales for North branch: %.4f", north / 3.0);
	printf("\nAverage sales for South branch: %.4f", south / 3.0);
	printf("\nAverage sales for East branch: %.4f", east / 3.0);
	printf("\nAverage sales for West branch: %.4f\n", west / 3.0);
	return 0;
}
