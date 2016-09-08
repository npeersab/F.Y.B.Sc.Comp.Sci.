#include <stdio.h>

int main() {

	float basic_sal;
	int emp_id;

	printf("Enter employee id : ");
	scanf("%d", &emp_id);
	printf("Enter basic salary : ");
	scanf("%f", &basic_sal);

	printf("\nEmployee id : %d\n", emp_id);
	printf("Take home salary : %.2f\n", basic_sal + basic_sal * 0.35);
	
	return 0;
}
