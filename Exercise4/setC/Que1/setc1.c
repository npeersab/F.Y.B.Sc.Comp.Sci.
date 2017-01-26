#include <stdio.h>

int main() {
	char ch;
	int characters = 0, words = 0, lines = 0;

	printf("Enter characters:\n");
	while ((ch = getchar()) != '*') {
		characters++;
		
		if (ch == ' ' || ch == '\t' || ch == ',' || ch == '.' || ch == ';')
			words++;
		
		if (ch == '\n') {
			words++;
			lines++;
		}
	}

	printf("Characters: %d\n", characters);
	printf("Words: %d\n", words);
	printf("Lines: %d\n", lines);

	return 0;
}
