#include<stdio.h>
#include<stdlib.h>

void f(int** q)					//*q=&p;����**qָ��ԭ&p�ĵ�ַ��
{
	*q=(int*)malloc(4);			/*��һ����̬�ڴ棬
									���ڴ治�ᱻ�����Զ��ͷţ����ɳ���Ա�ֶ��ͷţ��ҿ���ͨ��free����ͷ�.*/	
	**q=3;
//	free(q);
}

void g(int** p)					//ͬ��
{
	*p=(int*)malloc(4);								
	**p=5;
//	free(p);
}

/*
void h(int** f)
{
	int i=6;
	*f=&i;						  ���־�̬�ڴ��д�� ��Ȼû�б������ǵ�h()��������������ʱ��
							      ������Ѿ����˾�̬�ڴ�&i�ͷŵ��ˣ���34��*pָ��ĵ�ַ���ڴ棩�Ѿ��Ƿ���
}
*/

int main()
{
	int* p;	
	printf("%#x\n",p);			//���壺ָ�����p��ֵ��					
	printf("%#x\n",&p);			//���壺������
	f(&p);						
	printf("%d\n",*p);
//	free((int*)p);
//	free(&p);					//��&p(**q��ָ�������)�ͷŵ�
	g(&p);
	printf("%d\n",*p);
//	free(&p);
/*	h(&p);
	printf("%d\n",*p);    */      //	34��
	return 0;
}