#include <stdio.h>

int main() {
	int hr = 4, min = 0, st = 1, i, departure_hr = 0, departure_min, distance = 0;

	for (i = 0; i < 33; i++)
		printf("-");
	printf("\n| St. No. | Arrival | Departure |\n");

	while (hr < 13) {
		min += 30;
		distance += 40;
		if (min >= 60) {
			hr++;
			min %= 60;
		}

		departure_min = min + 10;
		if (departure_min >= 60) {
			departure_hr = hr + 1;
			departure_min %= 60;			
		}
		else
			departure_hr = hr;
	
		for (i = 0; i < 33; i++)
			printf("-");

		printf("\n| %7d | %4d:%2d | %6d:%2d |\n", st++, hr, min, departure_hr, departure_min);

		hr = departure_hr;
		min = departure_min;
	}

	for (i = 0; i < 33; i++)
		printf("-");
	printf("\nDistance Travelled: %d Km.\n", distance);
	return 0;
}
