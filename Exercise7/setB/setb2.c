#include <stdio.h>
#include <ctype.h>

int main() {
	int alpha = 0, digit = 0, symb = 0;
	int check(char);
	char ch;

	while ((ch = getchar()) != EOF) {
		if (check(ch) == 1)
			alpha++;
		else if (check(ch) == 2)
			digit++;
		else if (check(ch) == 3)
			symb++;
	}

	printf("Alphabets: %d\n", alpha);
	printf("Digits: %d\n", digit);
	printf("Special symbols: %d\n", symb);

	return 0;
}

int check(char ch) {
	if (isalpha(ch))
		return 1;
	if (isdigit(ch))
		return 2;
	if (ispunct(ch))
		return 3;
}
