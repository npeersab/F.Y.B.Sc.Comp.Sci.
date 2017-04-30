#include <stdio.h>

int main() {
	int array[20], size, key, pos;
	void accept(int [], int);
	int linearSearch(int [], int, int);

	printf("How many numbers?: ");
	scanf("%d", &size);
	accept(array, size);

	printf("Enter key to be searched: ");
	scanf("%d", &key);

	if ((pos = linearSearch(array, size, key)) == -1)
		printf("Key not found");
	else 
		printf("Key found at index %d", pos);

	printf("\n");
	return 0;
}

void accept(int array[], int size) {
	int i;
	
	printf("Enter numbers:\n");
	for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
}

int linearSearch(int array[], int size, int key) {
	while (size > 0)
		if (array[--size] == key)
			return size;
	return -1;
}
