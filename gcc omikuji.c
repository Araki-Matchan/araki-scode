#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <termios.h>

int main(void)
{
	int omikuji;
	srand((unsigned)time(NULL));/* 追加部分 */
	while (1){
		omikuji = rand() % 5 + 1;
		printf("おみくじのプログラムを始めます\n");
		printf("おみくじを開始するにはENTERキーを押してください\n");
		getchar();
		switch (omikuji){
		case 1:
			printf("あなたは大吉です\n");
			break;
		case 2:
			printf("あなたは中吉です\n");
			break;
		case 3:
			printf("あなたは吉です\n");
			break;
		case 4:
			printf("あなたは凶です\n");
			break;
		case 5:
			printf("あなたは大凶です\n");
			break;
		default: printf("よくわかりません\n");
			break;
		}

	}
	return 0;
}
