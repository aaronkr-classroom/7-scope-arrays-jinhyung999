//data_loss.c
#include <stdio.h>

int main(void) {
	unsigned int x = 0x12345678;
	long lg = 2147483648;
	double xl = 123456789123.456789;

	printf("Unit: %d\n", x);
	printf("Unit->short: %d\n",(short)x);
	printf("Unit->char %d\n", (char)x);

	printf("Long: %d\n", lg);
	printf("Long->int: %d\n", (int)lg);
	printf("Long->char %d\n", (char)lg);

	printf("Dbl: %lf\n", xl);
	printf("Dbl->long: %lf\n", (long)xl);
	printf("Dbl->char %lf\n", (char)xl);

	return 0;
}