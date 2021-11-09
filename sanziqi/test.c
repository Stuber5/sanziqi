#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	//游戏菜单
	printf("**********************\n");
	printf("****1.play--0.exit****\n");
	printf("**********************\n");

}

void game()
{
	//算法实现
	char board[ROW][COL] = { 0 };
	//数组<数据元素初始化>
	Initboard(board, ROW, COL);
	//平台打印
	Displayboard(board, ROW, COL);
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//进入游戏
			//printf("运行\n");//该printf用于测试
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (input);
	
}

int main()
{
	test();//执行框架
	return 0;
}