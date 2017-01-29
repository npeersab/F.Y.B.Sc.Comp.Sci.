#include <stdio.h>

int main() {
	int spring, summer, monsoon, winter, i, temp;
	spring = summer = monsoon = winter = 0;

	printf("Enter temperatures for Spring:\n");
	for (i = 0; i < 12; i++) {
		scanf("%d", &temp);
		if (temp < 15 || temp > 25)
			printf("Warning: Temperature out of range\n");
		spring += temp;
	}

	printf("Enter temperatures for Summer:\n");
	for (i = 0; i < 12; i++) {
		scanf("%d", &temp);
		if (temp < 25 || temp > 40)
			printf("Warning: Temperature out of range\n");
		summer += temp;
	}

	printf("Enter temperatures for Monsoon:\n");
	for (i = 0; i < 12; i++) {
		scanf("%d", &temp);
		if (temp < 20 || temp > 35)
			printf("Warning: Temperature out of range\n");
		monsoon += temp;
	}

	printf("Enter temperature for Winter:\n");
	for (i = 0; i < 12; i++) {	
		scanf("%d", &temp);
		if (temp < 5 || temp > 20)
			printf("Warning: Temperature out of range\n");
		winter += temp;
	}

	printf("Average temperature for Spring: %.4f\n", spring / 12.0);
	printf("Average temperature for Summer: %.4f\n", summer / 12.0);
	printf("Average temperature for Monsoon: %.4f\n", monsoon / 12.0);
	printf("Average temperature for Winter: %.4f\n", winter / 12.0);
	return 0;
}
