#include <stdio.h>

int main() {
	int n, num, sum, max_num, max_sum = 0, temp;

	printf("Enter n: ");
	scanf("%d", &n);

	while (n > 0) {
		printf("Enter number: ");
		scanf("%d", &num);

		temp = num;
		sum = 0;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}

		if (sum > max_sum) {
			max_sum = sum;
			max_num = num;
		}
		n--;
	}

	printf("Number having maximum sum of digits: %d\n", max_num);
	return 0;
}
