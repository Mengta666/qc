#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void compare(int player,int computer);

int main()
{
	while(1)
	{
		printf("***********************************\n");
		printf("*************��ȭ��Ϸ**************\n");
		printf("************1.��ʼ��Ϸ*************\n");
		printf("************2.�˳���Ϸ*************\n");
		printf("***********************************\n");
		printf("���������ѡ��\n");
		int i;
		scanf("%d",&i);
		if(i==1)
		{
			printf("��ѡ����Ҫ���ķ�ʽ��1.ȭͷ 2.���� 3.������");
			int player;
			scanf("%d",&player);
			int computer;
			srand((unsigned int) time(NULL));
			computer=rand()%3+1;
			compare(player,computer);
//			printf("%d\n",computer);
		}
		if(i==2)
		{
			printf("��ӭ�´�������\n");
			break;
		}
	}
	system("pause");
	return 0;
}

//�ж�:
void compare(int player,int computer)
{
	static int i=0,j=0,k=0;
	switch(player)
	{
	case 1:
		{
			if(computer==1)
			{	printf("ƽ�֣�\n"); i++;}
			if(computer==2)
			{	printf("��Ӯ�ˣ�\n"); j++;}
			if(computer==3)
			{	printf("����Ӯ�ˣ�\n"); k++;}
			break;
		}
	case 2:
		{
			if(computer==2)
			{	printf("ƽ�֣�\n");i++;}
			if(computer==3)
			{	printf("��Ӯ�ˣ�\n");j++;}
			if(computer==1)
			{	printf("����Ӯ�ˣ�\n");k++;}
			break;
		}
	case 3:
		{
			if(computer==3)
			{	printf("ƽ�֣�\n");i++;}
			if(computer==1)
			{	printf("��Ӯ�ˣ�\n");j++;}
			if(computer==2)
			{	printf("����Ӯ�ˣ�\n");k++;}
			break;
		}
	}
	printf("\n������Ϊ��\n");
	printf("ƽ��%d�Σ�\n",i);
	printf("��Ӯ��%d�Σ�\n",j);
	printf("����Ӯ��%d�Σ�\n",k);
	system("pause");
	system("cls");
}
