#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
// 8.1
void sort(int* p,int n);

void main()
{
	int a[3];
	printf("��������Ҫ�������������:\n");
	for(int i=0;i<3;i++)
		scanf("%d",a+i);
	sort(a,sizeof(a)/sizeof(a[0]));
	printf("%d %d %d\n",a[0],a[1],a[2]);
}

void sort(int* p,int n)
{
	int t=0;
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				t=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=t;
			}
		}
}
*/


/*
//8.2(����)
void sort(char(* p)[100],int n);

void main()
{
	char str[3][100];
	printf("��������Ҫ����������ַ���:\n");
	for(int i=0;i<3;i++)
		gets(str[i]);
	sort(str,3);
	printf("\n�ַ��������ȣ���С��������Ϊ��\n");
	printf("NO.1 : %s\n",str[0]);
	printf("NO.2 : %s\n",str[1]);
	printf("NO.3 : %s\n",str[2]);
}

void sort(char (* p)[100],int n)
{
	char str[100];
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			if(strcmp(*(p+i),*(p+j))>0)          //��������strcmpʱ���ú����Ǵ�ÿ���ַ���ʼ�Ƚϴ�С
												 //���磺������ xzx xx zxʱ����С����������xx xzx zx;
			{
				strcpy(str,*(p+i));
				strcpy(*(p+i),*(p+j));
				strcpy(*(p+j),str);
			}
		}
}
*/


//8.2
/*
void sort(char(* p)[100],int n);

void main()
{
	char str[3][100];
	printf("��������Ҫ����������ַ���:\n");
	for(int i=0;i<3;i++)
		gets(str[i]);
	sort(str,3);
	printf("\n�ַ��������ȣ���С��������Ϊ��\n");
	printf("NO.1 : %s\n",str[0]);
	printf("NO.2 : %s\n",str[1]);
	printf("NO.3 : %s\n",str[2]);
}

void sort(char (* p)[100],int n)
{
	char str[100];
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			if(strlen(*(p+i))>strlen(*(p+j)))          //��������strcmpʱ���ú����Ǵ�ÿ���ַ���ʼ�Ƚϴ�С
													   //���磺������ xzx xx zxʱ����С����������xx xzx zx;
													   //(�������ɿ��ϳ���)
			{
				strcpy(str,*(p+i));
				strcpy(*(p+i),*(p+j));
				strcpy(*(p+j),str);
			}
		}
}
*/


//8.3
/*
void find(int* p,int n);

void main()
{
	int a[10];
	printf("����������:\n");
	for(int i=0;i<10;i++)
		scanf("%d",a+i);
	find(a,sizeof(a)/sizeof(a[0]));
	for(i=0;i<10;i++)
		printf("%d ",*(a+i));
	printf("\n");
}

void find(int* p,int n)
{
	int t,s,r,min=*p,max=0;
	for(int i=0;i<n;i++)
	{
		if(*(p+i)>max)
		{
			t=i;
			max=*(p+i);
		}
		if(*(p+i)<min)
		{
			s=i;
			min=*(p+i);
		}
	}
	//����
	r=*(p+s);
	*(p+s)=*(p);
	*(p)=r;
	r=*(p+t);
	*(p+t)=*(p+n-1);
	*(p+n-1)=r;
}
*/


/*
//8.4
int change(int* arr,int len);

void main()
{
	int a[100],length,num;
	printf("���������鳤�ȣ�\nlength=");
	scanf("%d",&length);
	printf("���������������ݣ�\n");
	for(int i=0;i<length;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",a+i);
	}
	num=change(a,length);
	printf("��β������%d��Ƭ�κ������Ϊ��\n",num);
	for(i=0;i<length;i++)
		printf("%d ",*(a+i));
	printf("\n");
}

int change(int* arr,int len)
{
	int num,i=0,j=len-1,t=0;
	printf("��������β������Ƭ������\nnum=");
	scanf("%d",&num);
	while(i<num)
	{
		t=*(arr+i);
		*(arr+i)=*(arr+j);
		*(arr+j)=t;
		i++;
		j--;
	}
	return num;
}
*/


//8.5
/*
void select(int * p,int num);
void main()
{
	int a[100],*p,num;
	p=a;
	printf("�����������ѧ��������\nnum=");
	scanf("%d",&num);
	select(a,num);
	for(int i=0;i<num;i++)
	{
		if(*(p+i)!=0)
			printf("%d ",*(p+i));
	}
}

void select(int * p,int num)
{
	for(int i=0;i<num;i++)
		*(p+i)=i+1;
//	for(i=0;i<num;i++)
//    	printf(" %d",*(p+i));            //true
	int num1=num,k=0;
	while(num1>1)
	{
		for(int i=0;i<num;i++)
		{
			if(*(p+i)!=0)
				k++;
			if(k==3)
			{
				*(p+i)=0;
				num1--;
				k=0;
			}
		}
	}
}
*/

/*
//8.6

int len(char* str);

int main()
{
	char str[100];
	int num;
	printf("��������Ҫ���㳤�ȵ��ַ�����\n");
	gets(str);
	num=len(str);
	printf("���ַ�������Ϊ��%d\n",num);
	return 0;
}

int len(char* str)
{
	for(int i=0;str[i]!='\0';i++);
	return i;
}
*/


//8.7
/*
void change(char* str,char* str1);
void main()
{
	char stra[100]="My name is Li jilin.";
	char strb[100]="Mr. Zhang Haoling is very happy.";
	printf("ԭa�ַ�������Ϊ��\n");
	printf("%s \n",stra);
	printf("ԭb�ַ�������Ϊ��\n");
	printf("%s \n",strb);
	change(stra,strb);
	printf("��a�ַ�������Ϊ��\n");
	printf("%s \n",stra);
	printf("��b�ַ�������Ϊ��\n");
	printf("%s \n",strb);
}

void change(char* stra,char* strb)
{
	int j=11;
	for(int i=0;strb[i]!='\0';i++)
	{
		if(i>3&&i<17)
		{
			strcpy(stra+j,strb+i);
			j++;
		}
	}
	stra[j]='.';
	stra[j+1]='\0';
	strb[17]='\0';
}
*/

//8.8
/*
void  all1(char* str,int *num,int* arr);
void all2(char* str,int *arr1,int* arr2);
int main()
{
	char str[80];
	int i,arr=0,num=0,arr1=0,arr2=0,arr3=0;
	gets(str);
	all1(str,&num,&arr);
	all2(str,&arr1,&arr2);
	printf("Сд��ĸ��%d��\n������%d��\n�ո���%d��\n�����ַ���%d��\n",num,arr1,arr,arr2);
	system("pause");
	return 0;
}
void  all1(char* str,int *num,int* arr)
{
	for(int j=0;str[j]!='\0';j++)
	{
			if(str[j]>='a'&&str[j]<='z'||str[j]>='A'&&str[j]<='Z')
				(*num)++;
			else if(str[j]==' ')
				(*arr)++;
	}
}
void all2(char* str,int *arr1,int* arr2)
{
	for(int j=0;str[j]!='\0';j++)
		{
			if(str[j]>='0'&&str[j]<='9')
				(*arr1)++;
			else if(!(str[j]>='a'&&str[j]<='z'||str[j]>='A'&&str[j]<='Z')&&str[j]!=' ')
				(*arr2)++;
		}
}
*/

/*
//8.9
void compare(char(*str)[50]);
void main()
{
	char str[10][50];
	printf("������10���ȳ����ַ���:\n");
	for(int i=0;i<10;i++)
		gets(str[i]);
	compare(str);
	printf("��10���ַ����ɴ�С����Ϊ:\n");
	for(i=0;i<10;i++)
		printf("%s ",str[i]);
	printf("\n");
}

void compare(char(*str)[50])
{
	char str1[50];
	for(int i=0;i<10;i++)
		for(int j=i;j<10;j++)
		{
			if(strcmp(str[i],str[j])<0)
			{
				strcpy(str1,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],str1);
			}
		}
}
*/

//8.10
/*
void sort(int arr[50],int num);
void main()
{
	int a[50],num;
	printf("���������ָ�����\n");
	scanf("%d",&num);
	printf("��������%d����\n",num);
	int i=0;
	while(i<num)
	{
		scanf("%d",a+i);
		i++;
	}
	sort(a,num);
}

void sort(int arr[50],int num)
{
	int i=num;
	printf("��ԭ˳������Ϊ��\n");
	while(i>0)
	{
		printf("%d ",*(arr+i-1));
		i--;
	}
	printf("\n");
}
*/

//8.11
/*
void inv(int arr[10],int num);
void main()
{
	int i=0,arr[10]={2,4,6,5,7,8,9,3,1,10};
	inv(arr,sizeof(arr)/sizeof(arr[0]));
	while(i<10)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
}

void inv(int arr[10],int num)
{
	int i=num,j=0,arr1[10];
	while(i>0)
	{
		arr1[j]=arr[i-1];
		i--;
		j++;
	}
	while(i<num)
	{
		arr[i]=arr1[i];
		i++;
	}
}
*/



//8.12
//��1����atoiֱ��д
/*
void inv(char* str,int num);
void main()
{
	char str[100];
	int i=0;
	printf("����������ҵ��ַ�����\n");
	gets(str);
	while(str[i]!='\0')
		i++;
	inv(str,i);
}

void inv(char* str,int num)
{
	int i=0,j=0,k=0,arr[100];
	char str1[100];
	for(i=0;i<num+1;i++)
	{
		if(*(str+i)>='0'&&*(str+i)<='9')
		{
			strcpy(str1+k,str+i);
			k++;
		}
		if(*(str+i-1)>='0'&&*(str+i-1)<='9'&&!(*(str+i)>='0'&&*(str+i)<='9'))
		{
			arr[j]=atoi(str1);
			j++;
			k=0;
			strcpy(str1,"0");
		}
	}
	i=0;
	printf("���е����������У�\n");
	while(i<j)
	{
		printf("NO%d:%d \n",i+1,arr[i]);
		i++;
	}
}
*/

//��2���Լ���д����д(Ҳ�൱��atoi��ԭ��)
/*
void inv(char* str,int num);
void main()
{
	char str[100];
	int i=0;
	printf("����������ҵ��ַ�����\n");
	gets(str);
	while(str[i]!='\0')
		i++;
	inv(str,i);
}

void inv(char* str,int num)
{
	int i=0,j=0,k=0,q=0,arr[100]={0};
	char str1[100];
	for(i=0;i<num+1;i++)
	{
		if(*(str+i)>='0'&&*(str+i)<='9')
		{
			strcpy(str1+k,str+i);
			k++;
		}
		if(*(str+i-1)>='0'&&*(str+i-1)<='9'&&!(*(str+i)>='0'&&*(str+i)<='9'))
		{
			while(q<k)
			{
				arr[j]=arr[j]*10+str1[q]-'0';
				q++;
			}
			j++;
			k=0;
			q=0;
			strcpy(str1,"0");
		}
	}
	i=0;
	printf("���е����������У�\n");
	while(i<j)
	{
		printf("NO%d:%d \n",i+1,arr[i]);
		i++;
	}
}
*/

/*
����ע�⣺
1���ַ����ַ�����ı��ʾ���ASCII��ļ���
2����%d��ӡ�����Ľ���Ƕ�Ӧ��ASCII��ֵ������C�����е����ַ���ȥ��0����
	���������ַ�ת���ֵ�ʱ��(�磺��8�� - ��0�� �ļ���������8)
3��ASCII��������ٴ�ʹ��%c��ӡ���ͻ�ת��ΪASCII���Ӧ���ַ����͡�
�³������֤��	
void main()
{
	char str='100';
	printf("%d ",str-'0');
	printf("%d ",'8'-'0');
	printf("%cb",'10'-'0');//�˴���b������
}
//������Ϊ0 8  b
//'10'��Ӧ��asc11���ǻ��У�������
//��Ȼ�Ͻ��۳�����*/



/*
//8.13
void turn(int(*arr)[3],int num);
int main()
{
	int arr[3][3],arr1[3][3];
	turn(arr,3);
	return 0;
}

void turn(int(*arr)[3],int num)
{
	int i,j,arr1[3][3];
	printf("�������3*3����ʽ��\n");
	for(i=0;i<num;i++)
		for(j=0;j<num;j++)
			scanf("%d",*(arr+i)+j);
	for(i=0;i<num;i++)
		for(j=0;j<num;j++)
			*(*(arr1+j)+i)=*(*(arr+i)+j);
	printf("ת�ú�Ϊ��\n");
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("%5d ",*(*(arr1+i)+j));
		}
		printf("\n");
	}
}
*/