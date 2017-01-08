#include <stdio.h>

int main() {
	int n1, n2;
	char op;

	printf("Enter two integers :\n");
	scanf("%d%d", &n1, &n2);
	printf("Enter operation : ");
	scanf(" %c", &op);

	printf("\nResult : ");
	switch (op) {

		case '+' :
			printf("%d", n1 + n2);
			break;

                case '-' :
                        printf("%d", n1 - n2);
			break;

                case '/' :
                        printf("%f", n1 / (float) n2);
			break;

                case '*' :
                        printf("%d", n1 * n2);
			break;
		default :
			printf("Invalid operation");
	}
	printf("\n");
	
	return 0;
}
