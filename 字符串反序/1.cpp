#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("�������ַ���:\n");
	gets(str);
	printf("ԭ�ַ���Ϊ��\n");
	for(int j=0;str[j]!='\0';j++)
		printf("%c",str[j]);
	printf("\n");
    printf("�������ַ���Ϊ��\n");
	for(int i=j-1;i>=0;i--)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}
