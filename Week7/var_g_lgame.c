//var_g_l_game.c
#include <stdio.h>
#include <stdlib.h>// rand(), srand()
#include <time.h>
// time()-1970y1m1d 00:00���� ���ݱ��� mlisecond

//�������� 
int randNum;

//���� �ʱ�ȭ �Լ�
void gamelnit() {
	srand(time(0));
	randNum = rand() % 10 + 1;//1~10 random num
}

//���ӽ��� �Լ�
void gamePlay() {
	//���� ����
	int guess = 0;
	int count = 0;
	int allowed = 5;
	
	printf("Guess the number(1~10): ");

	do {
		scanf_s("%d", &guess);
		count++;
		if (guess == randNum)
		{
			printf("Good guess you win\n");
			break;
		}
		else if (guess < randNum) {
			printf("Too low! Try again!\n");
		}
		else if (guess > randNum) {
			printf("Too high! Try again!\n");
		}
	} while (count!=allowed);
	printf("Too many guesses! You lose!");
}

int main(void) {
	gamelnit();
	gamePlay();

	return 0;
}