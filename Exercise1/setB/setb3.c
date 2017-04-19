#include <stdio.h>

int main() {
	int amount, ones, fives, tens;

	printf("Enter amount to be withdrawn :");
	scanf("%d", &amount);

	// calculate 10's notes
	tens = amount / 10;
	
	// calculate 5's notes
	fives = (amount %= 10) / 5; 
	
	// calculate 1's notes
	ones = amount % 5;

	printf("\nTen's : %d\n", tens);
	printf("Five's : %d\n", fives);
	printf("One's : %d\n", ones);

	return 0;
}
