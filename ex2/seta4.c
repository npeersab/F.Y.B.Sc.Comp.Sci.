#include <stdio.h>

int main() {

	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	if(!(n % 5) && !(n % 7))
		printf("\n%d is divisble by 5 and 7\n", n);
	else
		printf("\n%d is not divsible by 5 and 7\n", n);
	
	return 0;
}
