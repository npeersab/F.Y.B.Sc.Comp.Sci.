#include <stdio.h>

int main() {
	int n;
	void printRecSum(int);

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Recursive sum:\n");
	printRecSum(n);
	printf("\n");
	return 0;
}

void printRecSum(int x) {
	int sum(int);

	printf("%d", x);
	if (x < 10)
		return;
	else {
		printf(" -> ");
		printRecSum(sum(x));
	}
}

int sum(int x) {
	if (x < 10)
		return x;
	else
		return x % 10 + sum(x / 10);
}
