#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 512

#include<stdio.h>
#include<conio.h>

int sub01(void);


typedef struct shohin{
	int number;
	char shina[MAX];
	int nedan;
}shohin_t;

int inputmoney(int val){
	char buffer[MAX] = { 0 };
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%d ", &val) == 1) {
			if (val <= 0){
				printf("ゼロ以下にはしないでください\n");
				inputmoney((0));
			}
			break;
		}
	}
	return val;
}

int sub01()
{
	int input;

	shohin_t title[512] = { { 1, "アクエリアス", 120 },
	{ 2, "いろはす", 150 },
	{ 3, "コーラ", 120 },

	};
	int m;
	m = 0;

	shohin_t *sp;

	sp = title;

	printf("お金を入れてください\n");

	m = inputmoney((0));

	printf("%d円お預かりしました。", m); //degug

	while (_getch() != 'ESC'){

		printf("買いたい商品を選んでください\n");
		for (int i = 0; i < 3; i++){
			printf("%d %s %d\n", (sp + i)->number, (sp + i)->shina, (sp + i)->nedan);
		}


		printf("アクエリアス=　zキー いろはす xキー コーラcキー\n");
		if (_getch() == 'z'){


			if (m < 120){
				printf("お金が足りません。\n");
				if (m < 120){
					printf("お金が足りません。\n");
					printf("プログラムを終了します");
					getchar();
					return 0;
				}
			}
			printf("はい、アクエリアスをどうぞ\n");
			m = m - 120;
			printf("%d", m); //*debug
			getchar();


		}
		if (_getch() == 'x'){


			if (m < 150){
				printf("お金が足りません。\n");
				if (m < 120){
					printf("お金が足りません。\n");
					printf("プログラムを終了します");
					getchar();
					return 0;
				}
			}
			printf("はい、いろはすをどうぞ\n");
			m = m - 150;
			printf("%d", m); //*debug
			getchar();


		}
		if (_getch() == 'c'){


			if (m < 120){
				printf("お金が足りません。\n");
				if (m < 120){
					printf("お金が足りません。\n");
					printf("プログラムを終了します");
					getchar();
					return 0;
				}
			}
			printf("はい、コーラをどうぞ\n");
			m = m - 120;
			printf("%d", m); //*debug
			getchar();


		}
		printf("残り%d円です", m);
	}
	return 0;
}
	

	
	
int main(void)
{
	sub01();
	return 0;
}
