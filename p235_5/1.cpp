#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//p235 7.5
/*
void joint(char str1[30],char str2[30]); 

void main()
{
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	printf("%s%s\n",str1,str2);
	joint(str1,str2);
}
void joint(char str1[30],char str2[30])
{
	printf("���Ӻ�\n");			
	printf("%s\n",strcat(str1,str2));
}

*/


/*
//p235 7.6
void cpy(char str[30]);
void main()
{
	char str[30];
	printf("�������ַ�����\n");
	gets(str);
	cpy(str);
//	printf("%s",str);
}
void cpy(char str[30])
{
	int i,j;
	char s[30];
	for(i=0,j=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='i'\
		||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='U'||str[i]=='u')
		{
			s[j]=str[i];
			j++;
		}
	}
	s[j]='\0';
	printf("Ԫ����ĸΪ��%s\n",s);
}
*/


/*
//p235 7.7
void blank(char str[80]);
void main()
{
	char str[80];
	gets(str);
	blank(str);
}
void blank(char str[80])
{
	int i,j=0;
	char s[80];
	for(i=0;str[i]!='\0';i++)
	{
//		printf("%c ",str[i]);
		s[2*i]=str[i];
		if(i>0)
			s[2*i-1]=' ';
	}
	s[2*i-1]='\0';
	printf("�пո�����ַ���Ϊ��\n");
	printf("%s\n",s);
}
*/


/*
//p235 7.8
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


//p235 7.9
/*
int one_by_one(char *str);
int judge(char* str,int* k);

void main()
{
	char str[100];
	int length,k=0;
	printf("����������ַ���\n");
	gets(str);
	printf("�ַ�������Ϊ��%d\n",strlen(str));
	length=judge(str,&k);
	printf("����ַ��ǣ�\n");
	for(int i=k;i<=k+length;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
int one_by_one(char str)
{
	if(str>='a'&&str<='z'||str>='A'&&str<='Z')
		return 1;
	else
		return 0;
}

int judge(char *str,int* place)
{
	int len,length=0,i,j=1,k;
	for(i=0;i<=strlen(str);i++)
	{
		if(one_by_one(str[i]))
			if(j)
			{
				k=i;
				j=0;
			}
			else
				len++;
		else
		{
			j=1;
			if(len>length)
			{
				length=len;
				*place=k;
				len=0;
			}
			len=0;
		}

	}
	return length;
}
*/


/*
//p235 7.10
void sort(char* str);

void main()
{
	char str[100];
	int length,k=0;
	printf("��������ַ�����\n");
	gets(str);
	sort(str);
	printf("�ַ��Ӵ�С����Ϊ��\n%s\n",str);
}

void sort(char* str)
{
	int i=0,j=0;
	char ch;
	for(i=0;i<strlen(str);i++)
		for(j=i;j<strlen(str);j++)
		{
			if(str[i]>str[j])
			{
				ch=str[i];
				str[i]=str[j];
				str[j]=ch;
			}
		}
}
*/


//7.11
/*
struct student* inputlink(struct student* head);
void output(struct student* head);
void averge(struct student* head);

 struct student {
	 char name[20];
	 int class1;
	 int class2;
	 int class3;
	 int class4;
	 int class5;
	 struct student* next;
};
int main()
{
	struct student* head;
	head=(struct student*)malloc(sizeof(struct student));
	head=inputlink(head);
	printf("\n");
	output(head);
	averge(head);
	return 0;
}

struct student* inputlink(struct student* head)
{
	struct student* body,*end;
	int n;
	end=head;
	printf("������ѧ��������\nn=");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		body=(struct student*)malloc(sizeof(struct student));
		printf("������ѧ�����֣�\n");
		scanf("%s",body->name);
		printf("������ѧ����һ�ſγɼ���\n");
		scanf("%d",&body->class1);
		printf("������ѧ���ڶ��ſγɼ���\n");
		scanf("%d",&body->class2);
		printf("������ѧ�������ſγɼ���\n");
		scanf("%d",&body->class3);
		printf("������ѧ�������ſγɼ���\n");
		scanf("%d",&body->class4);
		printf("������ѧ�������ſγɼ���\n");
		scanf("%d",&body->class5);
		end->next=body;
		end=body;
		
	}
	end->next=NULL;
	return head;
}

void output(struct student* head)
{
	struct student* body;
	float arr=0;
	body=head->next;
	while(body!=NULL)
	{
		printf("ѧ������%-20s\n",body->name);
		printf("ѧ����һ�ſγɼ���%-4d\n",body->class1);
		printf("ѧ���ڶ��ſγɼ���%-4d\n",body->class2);
		printf("ѧ�������ſγɼ���%-4d\n",body->class3);
		printf("ѧ�������ſγɼ���%-4d\n",body->class4);
		printf("ѧ�������ſγɼ���%-4d\n",body->class5);
		arr=body->class1+body->class2+body->class3+body->class4+body->class5;
		printf("��ѧ����ƽ���ɼ�Ϊ��%.2f\n",arr/5);
		body=body->next;
		printf("\n");
	}

}

void averge(struct student* head)
{
	struct student* body;
	float arr1=0,arr2=0,arr3=0,arr4=0,arr5=0;
	int i=0;
	body=head->next;
	while(body!=NULL)
	{
		i++;
		arr1+=body->class1;
		arr2+=body->class2;
		arr3+=body->class3;
		arr4+=body->class4;
		arr5+=body->class5;
		body=body->next;
	}
	printf("��һ�ſε�ƽ���ɼ�Ϊ%.2f\n",arr1/i);
	printf("�ڶ��ſε�ƽ���ɼ�Ϊ%.2f\n",arr2/i);
	printf("�����ſε�ƽ���ɼ�Ϊ%.2f\n",arr3/i);
	printf("�����ſε�ƽ���ɼ�Ϊ%.2f\n",arr4/i);
	printf("�����ſε�ƽ���ɼ�Ϊ%.2f\n",arr5/i);
	
}
*/




//7.12
//�ԡ�����


/*
//7.13
int max2(int* arr,int n);
int max1(int a,int b);
void main()
{
	int arr[4],max;
	printf("���������ĸ�������\n");
	for(int i=0;i<4;i++)
		scanf("%d",arr+i);
	max=max2(arr,4);
	printf("�������Ϊ��%d\n",max);
}

int max2(int* arr,int n)
{
	int max;
	if(n>2)
		max=max1(arr[n-1],max2(arr,n-1));
	if(n==2)
		max=max1(arr[n-1],arr[n-2]);
	return max;
}
int max1(int a,int b)
{
	return (a>b?a:b);
}
*/


/*
//7.14
int judge(int arr);
void turn(int arr,int n);
void main()
{
	int b=0,n,arr;
	printf("��������Ҫת�����ַ��������֣�\n");
	scanf("%d",&arr);
	if(arr<0)
	{
		b=arr;
		arr=-arr;
	}
	n=judge(arr);
	printf("������Ϊ%dλ��\n",n);
	printf("ת�����ַ�����Ϊ��\n");
	if(b<0)
	{
		printf("- ");
	}
	turn(arr,n);
	printf("\n");
}
int judge(int arr)
{
	static int n=0;
	if(!(arr<9))
	{
		n++;
		judge(arr/10);
	}
	else
		return n+1;

}

void turn(int arr,int n)
{
	putchar(arr%10+'0');
	putchar(' ');
	if(n>1)
		turn(arr/10,n-1);
}
*/