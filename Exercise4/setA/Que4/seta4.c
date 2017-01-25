#include <stdio.h>

int main() {
	char ch;
	int n;

	printf("Enter character: ");
	scanf("%c", &ch);
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Next %d characters: ", n);
	while (n > 0) {
		printf("%c ", ++ch);
		n--;
	}

	printf("\n");
	return 0;
}
