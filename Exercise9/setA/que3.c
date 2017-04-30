#include <stdio.h>

int main() {
	int size, array[20], num;
	void accept(int [], int);
	void count(int [], int, int);

	printf("How many numbers?: ");
	scanf("%d", &size);
	accept(array, size);

	printf("Enter number to be searched: ");
	scanf("%d", &num);
	count(array, size, num);

	printf("\n");
	return 0;
}

void accept(int array[], int size) {
	int i;

	printf("Enter numbers:\n");
	for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
}

void count(int array[], int size, int num) {
	int cnt = 0;

	while (size > 0) {
		if (array[--size] == num)
			cnt++;
	}

	printf("%d occurs %d times", num, cnt);
}
