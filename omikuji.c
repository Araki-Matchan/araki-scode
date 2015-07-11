#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 512
#define KUJI_SIZE 5

#include<stdio.h>
#include<stdlib.h>
#include<time.h>/* 追加部分 */
#include<conio.h>


int main(void)
{
	int omikuji;
	omikuji = 0;
	char result[KUJI_SIZE][MAX] = { "あなたは大吉です\n","あなたは中吉です\n","あなたは吉です\n","あなたは凶です\n","あなたは大凶です\n" };
	srand((unsigned)time(NULL));/* 追加部分 */
	while (_getch() != 0x1b){
		omikuji = rand() % 5;
		printf("おみくじのプログラムを始めます\n");
		getchar();
		printf("%s", result[omikuji]);
		getchar();
	}
	return 0;
}
