#include <stdio.h>

int main() {
	int i, n;
	int fib(int);

	printf("Enter n: ");
	scanf("%d", &n);

	printf("Fibonacci Series:\n");
	for (i = 1; i <=n; i++)
		printf("%d ", fib(i));
	printf("\n");
	return 0;
}

int fib(int n) {
	if (n == 1 || n == 2)
		return 1;
	else 
		return fib(n - 2) + fib(n - 1);
}
