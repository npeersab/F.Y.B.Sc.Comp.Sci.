#include <stdio.h>

int main() {
	int n, array[20];
	void accept(int [], int);
	void displayReverse(int [], int);

	printf("How many numbers?: ");
	scanf("%d", &n);
	accept(array, n);

	displayReverse(array, n);
	printf("\n");
	return 0;
}

void accept(int array[], int n) {
	int i;
	
	printf("Enter numbers:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
}

void displayReverse(int array[], int n) {
	printf("Numbers in reverse order:\n");
	while (n > 0)
		printf("%d ", array[--n]);
}
