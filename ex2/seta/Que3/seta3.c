#include <stdio.h>

int main() {
	char ch;

	printf("Enter a character : ");
	scanf("%c", &ch);
	
	if (ch <= '9' && ch >= '0')
		printf("\n%c is a digit\n", ch);
	else
		printf("\n%c is not a digit\n", ch);

	return 0;
}
