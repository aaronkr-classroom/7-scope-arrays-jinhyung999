//cypher.c
#include <stdio.h>
#include "encrypt.h"

int main(void) {
	extern int shift;
	char msg[100];

	//input msg
	printf("Enter a message to encrypt: ");
	fgets(msg, sizeof(msg), stdin);
	//scanf_s()함수는 첫번째 띄어쓰기 까지만 받지만 fgets()함수는 띄어쓰기와 같이 받을수있다
	printf("How many letters to shift? ");
	scanf_s("%d", &shift);

	encrypt(msg);
	
	printf("Encrypted: %s\n",msg);

	return 0;
}