#include <stdio.h>
#include <ctype.h>

int main() {
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);

	if (isalpha(ch)) {
		if (isupper(ch)) {
			printf("Upper case alphabet\n"); 
			printf("Lowe case: %c", tolower(ch));
		}
		else if (islower(ch)) {
			printf("Lower case alphabet\n");
			printf("Upper case: %c", toupper(ch));
		}
	}
	else if (isdigit(ch))
		printf("Digit");
	else if (ispunct(ch))
		printf("Punctuation Symbnol");

	printf("\n");
	return 0;
}
