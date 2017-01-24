#include <stdio.h>

int main() {
	float fah, cel;

	printf("Enter temperature in fahrenheit : ");
	scanf("%f", &fah);

	printf("\nTemperature in Celsius : %.2f\n", cel = 5.0/9 * (fah - 32));
	printf("Temperature in Kelvin : %.2f\n", cel + 273.15);
	
	return 0;
}
