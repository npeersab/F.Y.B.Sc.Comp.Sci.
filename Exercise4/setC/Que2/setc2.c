#include <stdio.h>

int main() {
	int num, rev = 0, temp;

	printf("Enter number: ");
	scanf("%d", &num);
	
	temp = num;
	while (temp > 0) {
		rev = (rev * 10) + temp % 10;
		temp /= 10;
	}

	if (rev == num)
		printf("It is a palindrome");
	else
		printf("It is not a palindrome");

	printf("\n");
	return 0;
}
