#include <stdio.h>
#include <stdlib.h>
void main()
{
	double a,b;
	int i=0;
	char c;
	while(1)
	{
		printf("������ʽ��\n");
		scanf("%lf%c%lf",&a,&c,&b);
		switch(c)
		{
		case '+':
			printf("������Ϊ��%lf\n",a+b);
			break;
		case '-':
			printf("������Ϊ��%lf\n",a-b);
			break;
		case '/':
			printf("������Ϊ��%lf\n",a/b);
			break;
		case '*':
			printf("������Ϊ��%lf\n",a*b);
			break;
		default:
			printf("����������������룺\n"); 
		}
	}
	system("pause");
}
