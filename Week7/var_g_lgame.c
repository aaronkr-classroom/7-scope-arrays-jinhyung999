//var_g_l_game.c
#include <stdio.h>
#include <stdlib.h>// rand(), srand()
#include <time.h>
// time()-1970y1m1d 00:00부터 지금까지 mlisecond

//전역변수 
int randNum;

//게임 초기화 함수
void gamelnit() {
	srand(time(0));
	randNum = rand() % 10 + 1;//1~10 random num
}

//게임실행 함수
void gamePlay() {
	//지역 변수
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