#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	printf("������һά����ĸ�����\n");
	scanf("%d",&i);
	int* arr=(int*)malloc(i*sizeof(int));
	printf("������һά���飺\n");
	for(n=0;n<i;n++)
		scanf("%d",arr+n);
	for(n=0;n<i;n++)
		printf("%d\n",arr[n]);
//	realloc(arr,100);
	printf("%d\n",sizeof(arr[0]));
}
	
	
