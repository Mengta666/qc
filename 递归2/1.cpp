#include<stdio.h>
int gar(int a,int b)
{
	int r;
	r=a%b;
	if(a%b==0)
		return b;
	else
	    return	gar(b,r);
}		
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=gar(a,b);
	printf("���Լ����%d\n",c);
	return 0;
}	
