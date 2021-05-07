#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define row 3
#define col 3

void select(char arr[row][col]);
void drow(char arr[row][col]);
void judge(char arr[row][col]);
void computer(char arr[row][col]);
void player2(char arr[row][col]);
void game(char arr[row][col]);
void game1(char arr[row][col]);
void game2(char arr[row][col]);
int winner(char arr[row][col]);
int isfull(char arr[row][col]);
void player1(char arr[row][col]);
void Game(char arr[row][col]);
void Game1(char arr[row][col]);
void MODE(char arr[row][col]);

int main()
{
	char arr[row][col]={'0','0','0','0','0','0','0','0','0'};
	select(arr);
	system("pause");
	return 0;
}

//���1���壺
void player1(char arr[row][col])
{
	while(1)
	{
		int x,y;
		printf("��ѡ���������λ�ã�x,y���� ");
		scanf("%d%d",&x,&y);
		x=x-1;
		y=y-1;
		if(x>row-1||y>col-1)
		{
			printf("���Ϸ�\n");
			continue;
		}
		if(arr[x][y]!='0')
		{
			printf("���Ϸ�\n");
			continue;
		}
		arr[x][y]='*';
		break;
	}
}

//���2���壺
void player2(char arr[row][col])
{
	while(1)
	{
		int x,y;
		printf("��ѡ���������λ�ã�x,y���� ");
		scanf("%d%d",&x,&y);
		x=x-1;
		y=y-1;
		if(x>row-1||y>col-1)
		{
			printf("���Ϸ�\n");
			continue;
		}
		if(arr[x][y]!='0')
		{
			printf("���Ϸ�\n");
			continue;
		}
		arr[x][y]='#';
		break;
	}
}

//�������壺
void computer(char arr[row][col])
{
	while(1)
	{
		int x,y;
		srand((unsigned int)time(NULL));
		x=rand()%row;
		y=rand()%col;
		if(arr[x][y]!='0')
		{
			continue;
		}
		arr[x][y]='#';
		break;
	}
}

//�˻�ģʽ�ж�˭������;
void judge(char arr[row][col])
{
	int i=0;
	printf("*********************************\n");
	printf("**********ѡ������˳��***********\n");
	printf("***********1.�������************\n");
	printf("***********2.��������************\n");
	printf("*********************************\n");+
	printf("���������ѡ��:\n");
	scanf("%d",&i);
	if(i==1)
		game1(arr);
	if(i==2)
		game2(arr);
}

//��ӡ����
void drow(char arr[row][col])
{
	int i;
	for(i=0;i<row;i++)
	{
		printf("+---+---+---+\n");
		printf("| %c | %c | %c |\n",arr[i][0],arr[i][1],arr[i][2]);
	}
	printf("+---+---+---+\n");
	printf("\n");
	printf("\n");
}

//��ʼѡ��
void select(char arr[row][col])
{
	int i;
	printf("********************************\n");
	printf("*************��Ϸ�˵�***********\n");
	printf("************1.��ʼ��Ϸ**********\n");
	printf("************2.�˳���Ϸ**********\n");
	printf("********************************\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("��ӭ�´����棡\n");
	}
	else if(i==1)
	{
		printf("\n");
		MODE(arr);
	}
}

//�˻�ģʽ��
void game(char arr[row][col])
{
	drow(arr);
	judge(arr);
}

//���˶�ս��
void Game(char arr[row][col])
{
	drow(arr);
	Game1(arr);
}

//�������Ҷ�ս��
void Game1(char arr[row][col])
{
	char iswinner;
	while(1)
	{
		system("cls");
		drow(arr);
		player1(arr);
		iswinner=winner(arr);
		if(iswinner!='p')
			break;
		system("cls");
		drow(arr);
		player2(arr);
		iswinner=winner(arr);
		if(iswinner!='p')
			break;
	}
	printf("���ս����\n");
	drow(arr);
	if(iswinner=='*')
		printf("���1ʤ����\n");
	if(iswinner=='#')
		printf("���2ʤ����\n");
	if(iswinner=='g')
		printf("ƽ�֣�����\n");

}

//����ҿ�ʼ�������
void game1(char arr[row][col])
{
	char iswinner;
	while(1)
	{
		system("cls");
		drow(arr);
		player1(arr);
		iswinner=winner(arr);
		if(iswinner!='p')
			break;
		system("cls");
		drow(arr);
		computer(arr);
		iswinner=winner(arr);
		if(iswinner!='p')
			break;
	}
	printf("���ս����\n");
	drow(arr);
	if(iswinner=='*')
		printf("��սʤ�������˻�����\n");
	if(iswinner=='#')
		printf("�㾹Ȼ�������˻�սʤ�ˣ���\n");
	if(iswinner=='g')
		printf("���Ȼ�������˻�ƽ�֣�����\n");


}

//�ӵ��Կ�ʼ�������
void game2(char arr[row][col])
{
	char iswinner;
	while(1)
	{
		system("cls");
		computer(arr);
		drow(arr);
		iswinner=winner(arr);
		if(iswinner!='p')
			break;
		system("cls");
		drow(arr);
		player1(arr);
		iswinner=winner(arr);
		if(iswinner!='p')
			break;
	}
	drow(arr);
	printf("���ս����\n");
	if(iswinner=='*')
		printf("��սʤ�������˻�����\n");
	else if(iswinner=='#')
		printf("�㾹Ȼ�������˻�սʤ�ˣ���\n");
	else if(iswinner=='g')
		printf("���Ȼ�������˻�ƽ�֣�����\n");

}

//�����ж�Ӯ�������
int winner(char arr[row][col])
{
	for(int i=0;i<row;i++)
	{
		if(arr[i][0]!='0')
			if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2])
				return arr[i][0];
	}
	for(i=0;i<col;i++)
		if(arr[0][i]!='0')
			if(arr[0][i]==arr[2][i]&&arr[2][i]==arr[1][i])
				return arr[0][i];
	if(arr[0][0]!='0'&&arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])
		return arr[0][0];
	if(arr[0][2]!='0'&&arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])
		return arr[0][2];
	if(isfull(arr))
		return 'p';
	return 'g';
}

//�ж������Ƿ�����
int isfull(char arr[row][col])
{
	int i=0,j=0;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			if(arr[row][col]=='0')
				return 0;
	return 1;
}

//ģʽѡ��
void MODE(char arr[row][col])
{
	printf("********************************\n");
	printf("************ģʽѡ��************\n");
	printf("***********1.�˻���ս***********\n");
	printf("***********2.���˶�ս***********\n");
	printf("********************************\n");
	int i;
	printf("���������ѡ��");
	scanf("%d",&i);
	if(i==1)
		game(arr);
	if(i==2)
		Game(arr);
}
