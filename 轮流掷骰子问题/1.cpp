#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
	int a=0,b=0,n,m;
	int num=0,nam=0;
	srand(time(NULL));
	printf("��������ж�������Ϸ��һ����Ϸÿ���������Ӷ��ٴΣ�\n");
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			a+=rand()%7;
			b+=rand()%7;
		}
		if(a>b)
			num++;
		if(b>a)
			nam++;
		a=0;b=0;
	}
	if(num>nam)
		printf("��һ���˻�ʤ��");
	else if(nam>num)
		printf("�ڶ����˻�ʤ��");
	else
		printf("ƽ�֣�");
	printf("\n");
	system("pause");
}
/*
			������������:ȷ��ÿ��Ͷ�������Լ�
			Ͷ���������ü����ģ�����ս��
*/

			
