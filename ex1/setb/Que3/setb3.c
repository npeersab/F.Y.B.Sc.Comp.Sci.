#include <stdio.h>

int main() {

	int amount, ones, fives, tens;

	printf("Enter amount to be withdrawn :");
	scanf("%d", &amount);

	tens = amount / 10;
	fives = (amount %= 10) / 5; 
	ones = amount % 5;

	printf("\nTen's : %d\n", tens);
	printf("Five's : %d\n", fives);
	printf("One's : %d\n", ones);

	return 0;
}
