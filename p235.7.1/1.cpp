#include <stdio.h>
int min(int a,int b)
{
	int n=0;
	if(a%b==0)
		return b;
	if(a%b!=0)
	{
		min(b,a%b);
	}
}
int max(int a,int b,int c)
{
	int d;
	d=a*b/c;
	return d;
}
void main ()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=min(a,b);
	printf("�������Ϊ��%d\n",c);
	c=max(a,b,c);
	printf("��С������Ϊ��%d\n",c);
}