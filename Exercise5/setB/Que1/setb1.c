#include <stdio.h>

int main() {
	int i, temp, sum, digit;
	
	printf("Armstrong numbers between 1 and 500: ");
	for (i = 1; i <= 500; i++) {
		temp = i;
		sum = 0;
		while (temp > 0) {
			digit = temp % 10;
			sum += digit * digit * digit;
			temp /= 10;
		}
		if (i == sum)
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}
