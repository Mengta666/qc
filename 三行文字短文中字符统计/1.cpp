#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[3][80];
	int i,arr=0,num=0,arr1=0,arr2=0,arr3=0;
	for(i=0;i<3;i++)
		gets(str[i]);
	for(i=0;i<3;i++)
		for(int j=0;str[i][j]!='\0';j++)
		{
			if(str[i][j]>='a'&&str[i][j]<='z')
				num++;
			else if(str[i][j]==' ')
				arr++;
	    	else if(str[i][j]>='A'&&str[i][j]<='Z')
				arr1++;
			else if(str[i][j]>='0'&&str[i][j]<='9')
				arr2++;
			else if(str[i][j]!='\n')
				arr3++;
		}
	printf("Сд��ĸ��%d��\n��д��ĸ��%d��\n������%d��\n�ո���%d��\n�����ַ���%d��\n",num,arr1,arr2,arr,arr3);
	system("pause");
}

