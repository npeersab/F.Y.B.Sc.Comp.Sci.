#include <stdio.h>

int main() {
	int n, i, cnt;
	int power(int, int);
	int fact(int);
	float sum = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	for (i = cnt = 1; i <= n; i++, cnt += 2) {
		if (i % 2)
			sum += power(i, cnt) / (float) fact(cnt);
		else 
			sum -= power(i, cnt) / (float) fact(cnt);
	}

	printf("Sum: %.4f\n", sum);
	return 0;
}

int power(int x, int y) {
	int pow = 1;

	while (y-- > 0)
		pow *= x;

	return pow;
}

int fact(int x) {
	int fact = 1;

	while (x > 1)
		fact *= x--;

	return fact;
}
