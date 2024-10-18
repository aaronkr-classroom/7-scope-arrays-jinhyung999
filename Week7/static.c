//static.c
#include <stdio.h>
void Test() {
	int data = 0;
	printf("%d, \n", data++);
}

void Test2() {
	static int data = 0;
	printf("%d, \n", data++);
}

int main(void) {
	printf("Test result\n");
	for (int i = 0; i < 5; i++) Test();
	printf("Test2(static) result\n");
	for (int i = 0; i < 5; i++) Test2();


	return 0;
}