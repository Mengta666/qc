#include <stdio.h>
#include <stdlib.h>
void prime(int a)
{
	int i=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("NO!\n");
			break;
		}
	}
	if(a==i)			
		printf("YES!\n");
}
int main()
{
	int a;
	printf("��������Ҫ�ж�������ԭ����\n");
	scanf("%d",&a);
	prime(a);
	system("pause");
	return 0;
}