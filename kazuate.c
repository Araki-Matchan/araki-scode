
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1024
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

int sub01(void)
{
	int str[MAX];
	char buffer[MAX];
	printf("文字列と数値を入力して下さい。例：　mojiretsu 432\n");
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%s", str) == 1) {
			printf("Read (%s)\n", str);
		}
	}
	return 0;
}
int namvergame(void){
	
	int answer;
	srand((unsigned)time(NULL));/* 追加部分 */
	answer = rand() % 100 + 1;
	char buffer[MAX];
	int inputdata;
	inputdata = 0;
	printf("数当てゲームを開始します\n");
	getchar();
	printf("数字を入力してください\n");
	
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%d", &inputdata) == 1) {
			if (inputdata == answer){
				printf("正解です。ゲームを終了します\n");
				getchar();
				return 0;
			}
			else if (inputdata < answer){
				printf("入力した数字は答えより小さいです\n");
			}
			else if (inputdata > answer){
				printf("入力した数字は答えより大きいです\n");
			}
			else { printf("数字を入力してください"); }
			printf("Read (%d)\n", inputdata);
		}
	}
	return 0;
}

int sub03(void)
{
	int hoshi;
	hoshi = 0;
	int i,j;

	for (i = 0; i <= 10; i++){
		for (j = 0;j <= 10;j++){
			printf("★");
			

		}
		printf("\n");
	}
	getchar();
	return 0;
}
int sub04(void)
{
	int i;
	int hitkey;
	hitkey = 0;
	int cnt;
	cnt = 0;

	while (1){
		cnt++;
		if (_kbhit() == 'z'){
			
			break;


		}
		printf("%d", cnt);
		Sleep(100);
	}
	return 0;
}

int cpuselect(void){
	srand((unsigned)time(NULL));/* 追加部分 */
	return rand() & 3 + 1;
}

int janken(void)
{
	int check;
	
	int enemyhand;
	enemyhand = 0;
	
	int i;
	char myhand;

	printf("じゃんけんゲームを始めます\n");
	getchar();
	while (_kbhit() == 'ESC'){
	printf("手を選んでください\n");
	getchar();
	printf("グー = zキー チョキ = xキー パー = cキー\n");
	if (_kbhit() == 'z'){
		myhand = 'z';
	}
	else if (_kbhit() == 'x'){
		myhand = 'x';
	}
	else if (_kbhit() == 'c'){
		myhand = 'c';
	}
	enemyhand = cpuselect();
	}
	if (enemyhand == 1 && myhand == 'z'){
		printf("コンピュータはグーを出した\n");
		Sleep(1000);
		printf("相子です\n");
	}
	else if (enemyhand == 1 && myhand == 'x'){
		printf("コンピュータはチョキを出した\n");
		Sleep(1000);
		printf("あなたの勝ちです\n");
	}
	else if (enemyhand == 1 && myhand == 'c'){
		printf("コンピュータはパーを出した");
		Sleep(1000);
		printf("あなたの負けです。");
	}
	else if (enemyhand == 2 && myhand == 'z'){
		printf("コンピュータはチョキを出した\n");
		Sleep(1000);
		printf("あなたの勝ちです");
	
	}
	else if (enemyhand == 2 && myhand == 'x'){
	}
	
	return 0;
}

int sub05(void)
{
	int val;
	int cnt;
	int i;

	printf("ここは関数sub05です");
	getchar();
	
	return 0;
}

int sub06(void)
{
	printf("hello,world");
	getchar();
	return 0;
}

int sub07(void)
{
	printf("ここはサブルーチン007です");
	getchar();
	

	return (0);
}

int sub08(void)
{
	int val;
	int i, j;
	printf("どういうことなの　タイピングモナー");
	for (i = 0; i > 15; i++){
		for (j = 0; j > 15; j++){
			
		}
	}
	return 0;
}

int sub09(void)
{
	int val;
	int i, j;
	int cnt;
	int check;
	char str[MAX];
	char buffer[MAX];
	int star;
	star = 10;
	printf("パソコンスピード認定試験");
	getchar();
	printf("ここはサブルーチン８です\n");
	for (i = 0; i <=  star; i++){
		for (j = 0; j <= star; j++){
			printf("★");
		}
		printf("\n");
	}
	getchar();
	return 0;
}

int sub10(void)
{
	int val;
	int i, j;
	int cnt;
	int check;
	char str[MAX];
	char buffer[MAX];
	int star;
	star = 10;
	cnt = 0;
		i = 0;
		while (cnt <= star){
			cnt++;

			while (i <= star)
			{
				i++;
				printf("★");

			}
			printf("\n");
		}
	getchar();
	return 0;
}

int sub11(void)
{
	int val;
	int cnt;

	printf("ここはサブルーチン１１です");

	return 0;
}

int input(int *m)
{
	char buffer[MAX];
	int val;
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		printf("このプログラムはタイマーです。図りたい秒数を入力してください\n");
		if (sscanf(buffer, "%d", &val) == 1) {
			printf("Read (%d)\n", val);
		}
		m = &val;
		return (*m);
	}
}

int timer(void)
{
	int i;
	char buffer[MAX];
	char str[MAX];
	int cnt;
	int j;
	int val;
	val = 0;
	int *m;
	int *val;

	m = &val;

		
	
	printf("%d秒でよろしいですか？Y or N\n", val);
	for (i = 0; i <= val; val--){

		printf("残り%d秒です\n", val);
		Sleep(1000);
	}
	return 0;
}
	

int sub11(void)
{
	
	return 0;
	
}

int main(void)
{
	printf("ここはメインプロセスです");
	getchar();
	timer();
	return 0;
}
