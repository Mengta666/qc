#include<stdio.h>
void average(double* a,int n)
{
	double sun= 0;
	for(int i=0;i<n;i++)
	{
		sun=sun+a[i];
	}
	    printf("ƽ���ɼ�Ϊ: %.1lf\n", sun/n);
}
void max(double* p,int n)
{
	double max=0,a;
	for(int i=0;i<10;i++)
	{
		if(p[i]>max)
		{
			max=p[i];
			a=i;
		}
	}
	printf("��߳ɼ�Ϊ:%.0lf \n�������Ϊ:%.0lf\n" ,max,a+1);
}	
void main()
{
	double a[10];
	printf("������10���˵ĳɼ�: \n");
	for(int i=0;i<10;i++)
		scanf("%lf",&a[i]);
	average(a,10);
	max(a,10);
}