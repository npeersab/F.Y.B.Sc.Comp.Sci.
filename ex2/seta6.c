#include <stdio.h>

int main() {

	char ch;

	printf("Enter a character : ");
	scanf("%c", &ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		printf("\n%c is a vowel\n", ch);
	else
		printf("\n%c is a consonant\n", ch);

	return 0;
}
