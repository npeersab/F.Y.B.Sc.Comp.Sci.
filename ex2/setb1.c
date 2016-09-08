#include <stdio.h>

int main() {

	char ch;

	printf("Enter a character : ");
	scanf("%c", &ch);

	if(ch > 47 && ch < 59)
		printf(" %c is a digit\n", ch);
	else if(ch > 96 && ch < 123)
		printf(" %c is a lowercase alphabet\n", ch);
	else if(ch > 64 && ch < 91)
		printf(" %c is a uppercase alphabet\n", ch);

	return 0;
}

