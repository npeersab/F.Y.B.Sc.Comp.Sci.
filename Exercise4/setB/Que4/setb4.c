#include <stdio.h>

int main() {
	int alphabets = 0, digits = 0;
	char ch;

	printf("Enter characters:\n");
	while ((ch = getchar()) != EOF) {
		if (ch >= 'A' && ch <= 'z')
			alphabets++;
		else if (ch >= '0' && ch <= '9')
			digits++;
	}

	printf("Alphabets: %d\nDigits: %d\n", alphabets, digits);
	return 0;
}
