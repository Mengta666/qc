#include<stdio.h>
#include<string.h>
int main()
{
	char str1[80],str2[80],string[80];
	int a;
	printf("********1.ԭ��ת����      2.����תԭ��********\n");
	printf("��������Ҫת�������ͣ�\n");
	scanf("%d",&a);
	if(a==1)
	{
		gets(string);
		printf("������ԭ�ģ�\n");
		gets(str1);
		for(int i=0;str1[i]!='\0';i++)
		{
			if(str1[i]>='a'&&str1[i]<='z')
			{
				str2[i]=219-str1[i];
			}
			else if(str1[i]>='A'&&str1[i]<='Z')
			{
				str2[i]=155-str1[i];
			}
			else
				str2[i]=str1[i];
		}
		str2[i+1]='\0';
		printf("ԭ��Ϊ��\n");
		printf("%s\n",str1);
		printf("�õ�������Ϊ��\n");
		printf("%s",str2);
		printf("\n");
	}
	if(a==2)
	{
		gets(string);
		printf("���������룺\n");
		gets(str1);
		for(int i=0;str1[i]!='\0';i++)
		{
			if(str1[i]>='a'&&str1[i]<='z')
			{
				str2[i]=219-str1[i];
			}
			else if(str1[i]>='A'&&str1[i]<='Z')
			{
				str2[i]=155-str1[i];
			}
			else
				str2[i]=str1[i];
		}
		str2[i+1]='\0';
		printf("����Ϊ��\n");
		printf("%s\n",str1);
		printf("�õ���ԭ��Ϊ��\n");
		printf("%s",str2);
		printf("\n");
	}
	return 0;
}
