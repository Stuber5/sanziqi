#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	//��Ϸ�˵�
	printf("**********************\n");
	printf("****1.play--0.exit****\n");
	printf("**********************\n");

}

void game()
{
	//�㷨ʵ��
	char board[ROW][COL] = { 0 };
	//����<����Ԫ�س�ʼ��>
	Initboard(board, ROW, COL);
	//ƽ̨��ӡ
	Displayboard(board, ROW, COL);
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//������Ϸ
			//printf("����\n");//��printf���ڲ���
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,����������\n");
			break;
		}
	} while (input);
	
}

int main()
{
	test();//ִ�п��
	return 0;
}