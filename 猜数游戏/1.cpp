#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	long int a,b,i;
	srand(time(NULL));
	a=rand()%1000;
	printf("��Ϸ��ʼ\n������һ������\n");
    while(1)
	{
		scanf("%ld",&b);
		if(b<a)
		{
			printf("���������С�˵㣬������һ��������ԣ�");
			continue;
		}
		if(b>a)
		{
			printf("������������˵㣬������һ��С�����ԣ�");
			continue;
		}
		if(a==b)
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		}
	}
	system("pause");
	return 0;
}
