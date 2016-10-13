#include <stdio.h>

int main() {

	int a, b;

	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	
	printf("\na before swap : %d\n", a);
	printf("b before swap : %d\n", b);

	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\na after swap : %d\n", a);
	printf("b after swap : %d\n", b);

	return 0;
}
	 

