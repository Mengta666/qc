#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[30];
	int age;
	float grade;
};

// ���⼸��ѧ���ĳɼ�������� 
void sortstudent(struct student* Parr2,int len)
{
	struct student t;
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-1-i;j++)
		{
			if(Parr2[j].grade<Parr2[j+1].grade)
			{
				t=Parr2[j];
				Parr2[j]=Parr2[j+1];
				Parr2[j+1]=t;
			}
		}
	}
	printf("\n");
	printf("\n");
	printf("������Ϊ��\n");
	for( i=0;i<len;i++)
	{
		printf("��%d��  ",i+1); 
		printf("������%-20s  ",Parr2[i].name);
		printf("���䣺");
		printf("%2d  ",Parr2[i].age);
		printf("�ɼ���");
		printf("%.2f  ",Parr2[i].grade);
		printf("\n");
	}
}

//��Ϊ����ѧ����Ϣ�ĺ���
void inputstudent(struct student* Parr1,int len)
{
	for(int i=0;i<len;i++)
	{
		printf("�������%d��ѧ������Ϣ��\n",i+1);
		printf("�������֣�");
		scanf("%s",Parr1[i].name);
		printf("�������䣺");
		scanf("%d",&Parr1[i].age);
		printf("�����ɼ���");
		scanf("%f",&Parr1[i].grade);
	}
	sortstudent(Parr1,len);						//���⼸��ѧ���ĳɼ����� ����� 

}

int main()
{
	int len;
	struct student* Parr;
	printf("������ѧ��������\nlen=");
	scanf("%d",&len);
	Parr=(struct student*)malloc(len*sizeof(struct student));
	//����Ϊ����ѧ����Ϣ��
	inputstudent(Parr,len); 
	free(Parr);
	system("pause");
	return 0;

}