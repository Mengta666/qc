#include <stdio.h>
#include <stdlib.h>
void main()
{
	long int n,m;
	int arr[200][200],arr1[200][200];
	printf("������þ����������������\n");
	scanf("%ld%ld",&n,&m);
	printf("������þ���\n");
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",arr[i]+j);
	for( i=0;i<n;i++)
		for(int j=0;j<m;j++)
			arr1[j][i]=arr[i][j];
	for(i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("  %5d",arr1[i][j]);
		printf("\n");
	}
	system("pause");
}

