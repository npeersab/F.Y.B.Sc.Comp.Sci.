#include <stdio.h>

int nextChars(char, int);

int main() {
	int n;
	char ch;

	printf("Enter character: ");
	scanf("%c", &ch);
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Next %d characters:\n", n);
	nextChars(ch, n);
	printf("\n");

	return 0;
}

int nextChars(char ch, int n) {
	while (n > 0) {
		printf("%c ", ++ch);
		n--;
	}
}
