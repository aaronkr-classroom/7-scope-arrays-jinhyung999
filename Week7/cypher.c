//cypher.c
#include <stdio.h>
#include "encrypt.h"

int main(void) {
	extern int shift;
	char msg[100];

	//input msg
	printf("Enter a message to encrypt: ");
	fgets(msg, sizeof(msg), stdin);
	//scanf_s()�Լ��� ù��° ���� ������ ������ fgets()�Լ��� ����� ���� �������ִ�
	printf("How many letters to shift? ");
	scanf_s("%d", &shift);

	encrypt(msg);
	
	printf("Encrypted: %s\n",msg);

	return 0;
}