#include <stdio.h>

int main() {
	int m1, m2, m3;
	float avg;

	printf("Enter marks :\n");
	printf("Subject 1 : ");
	scanf("%d", &m1);
	printf("Subject 2 : ");
	scanf("%d", &m2);
	printf("Subject 3 : ");
	scanf("%d", &m3);

	avg = (m1 + m2 + m3) / 3.0;
	
	printf("\n");
	if (avg > 70)
		printf("Class I ");
	else if (avg > 60)
		printf("Class II ");
	else if (avg > 50)
		printf("Class III ");
	else if (avg > 40)
		printf("Pass ");
	else
		printf("Fail ");

	printf("with average %.2f\n", avg);

	return 0;
}
