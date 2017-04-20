#include <stdio.h>

int main() {
	int n;
	void recursivePrint(int);
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Digits:\n");
	recursivePrint(n);
	printf("\n");

	return 0;
}

void recursivePrint(int x) {
	if (x < 10)
		printf("%d", x);
	else {
		printf("%d\t", x % 10);
		recursivePrint(x / 10);
	}
}
