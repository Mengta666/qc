#include <stdio.h>
void main()
{
	int x[100];
	int i,j,k,t;
	printf("���������֣�0��������\n");
	for(i=0;i<100;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]==0)
			break;
	}
	// ����Ϊ�Ӵ�С����
	for(j=0;j<=i-1;j++)
		for(k=0;k<i-j;k++)
			if(x[k]<x[k+1])
			{
				t=x[k];
				x[k]=x[k+1];
				x[k+1]=t;
			}
	printf("�������ݴӴ�С����Ϊ��\n");
	for(k=0;k<i;k++)
		printf("%d ",x[k]);
}