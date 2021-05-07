#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int menu();
void ini(struct student * head);
void input(struct student * head);
void find();
void add();
void del();
struct student * ref();
void sort();
void output(struct student *head);
struct student * creat(struct student *head);
struct student * ref1();

//һ������ѧ����Ϣ�Ľṹ��
struct student{
	char stu_id[20];
	char name[20];
	int age;
	float english;
	float math;
	float chinese;
	float pe;
	struct student *next;
};

int main()
{
	struct student * head=NULL;
	head=(struct student *)malloc(sizeof(struct student));
	int i;
	i=menu();
	switch(i)
	{
	case 1:
		ini(head);               //��ʼ��ѧ����Ϣ
		break;
	case 2:
		find();              //��ѯȫ��ѧ����Ϣ
		break;               
	case 3:
		add();				 //���ѧ����Ϣ
		break;
	case 4:
		del();               //ɾ��ѧ����Ϣ
		break;
	case 5:
		ref();               //ˢ��ѧ����Ϣ
		break;
	case 6:
		sort();              //��ѧ������ѧ���Ⱥ�����
		break;
	case 7:
		system("cls");
		printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}

// ѡ��˵���
int menu()
{
	int num;
	printf("***************************************************************************************\n");
	printf("***************************************************************************************\n");
	printf("*******************************     ѧ����Ϣ����ϵͳ      *****************************\n");
	printf("***************************************************************************************\n");
	printf("*******************************   1.��ʼ��ѧ����Ϣ        *****************************\n");
	printf("*******************************   2.��ѯѧ����Ϣ          *****************************\n");
	printf("*******************************   3.���ѧ����Ϣ          *****************************\n");
	printf("*******************************   4.ɾ��ѧ����Ϣ          *****************************\n");
	printf("*******************************   5.ˢ��ѧ����Ϣ          *****************************\n");
	printf("*******************************   6.����ѧ����Ϣ����ѧ�ţ�*****************************\n");
	printf("*******************************   7.�˳���Ϣϵͳ          *****************************\n");
	printf("*******************************  ������ʹ��ǰ���ȳ�ʼ��   *****************************\n");
	printf("***************************************************************************************\n");
	printf("***************************************************************************************\n");
	printf("\n");
	while(1)
	{
		printf("���������ѡ��");
		scanf("%d",&num);											
		if(num>=1&&num<=7)
			break;
		else
			printf("error��try again����\n");
	}
	system("cls");
	return num;
}

void ini(struct student * head)
{
	char ch1,ch;
	ch1=getchar();
	struct student* end,* body;
	end=head;
    FILE *fp=fopen("ѧ���ɼ�.txt","rb+");
	body=(struct student *)malloc(sizeof(struct student));
	if(fread(body,sizeof(struct student),1,fp)!=1)
	{
		fclose(fp);
		printf("δ��ѯ��ѧ����Ϣ�������´���\n");
		printf("\n");
		input(head);
	}
	else
	{
		fclose(fp);
		printf("��ѯ��ѧ����Ϣ���Ƿ������Y or N��?\n");
		while(1)
		{
			printf("���������ѡ��");
			ch=getchar();
			ch1=getchar();                                           //�̵������ַ�
			if(ch=='Y')
			{
				ref();
				break;
			}
			else if(ch=='N')
			{
				system("cls");
				main();
				break;
			}
			else
				printf("error! try again!!\n");
		}
	}
}

void input(struct student * head)
{
	struct student* end,* body;
	end=head;
	FILE *fp=fopen("ѧ���ɼ�.txt","wb+");
	printf("������ѧ����Ϣ��ѧ��Ϊ-1ʱ��������\n");
	while(1)
	{
			body=(struct student *)malloc(sizeof(struct student));
			printf("ѧ��ѧ�ţ�");
			scanf("%s",body->stu_id);
			if(strcmp(body->stu_id,"-1")==0)
				break;
			printf("ѧ��������");
			scanf("%s",body->name);
			printf("ѧ�����䣺");
			scanf("%d",&body->age);
			printf("ѧ��Ӣ��ɼ���");
			scanf("%f",&body->english);
			printf("ѧ����ѧ�ɼ���");
			scanf("%f",&body->math);
			printf("ѧ�����ĳɼ���");
			scanf("%f",&body->chinese);
			printf("ѧ�������ɼ���");
			scanf("%f",&body->pe);
			fwrite(body,sizeof(struct student),1,fp);
			end->next=body;
			end=body;
	}
	end->next=NULL;
	fclose(fp);
	printf("\n�Ƿ񷵻����˵���Y or N��:\n");
	char ch,ch2;
	ch2=getchar();
	while(1)
	{
		printf("���������ѡ��");
		ch=getchar();
		ch2=getchar();
		if(ch=='N')
			{
				system("cls");
				printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
				system("pause");
				break;
			}
		else if(ch=='Y')
			{
				system("cls");
				main();
				break;
			}
		else
			printf("error! try again!!\n");
	}
}

void find()
{
	struct student * head=NULL;
	head=ref1();
	if(head==0)
	{
		while(1)
		{
			printf("\n�Ƿ����ѧ����Ϣ��Y or N��:\n");
			char ch,ch2;
			ch2=getchar();
			ch=getchar();
			if(ch=='N')
				{
					system("cls");
					printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
					system("pause");
					return;
				}
			else if(ch=='Y')
				{
					system("cls");
					add();
					break;
				}
			else
				printf("error! try again!!\n");
		}
	}
	printf("������Ҫ���ҵ�ѧ����ѧ�ţ�\n");
	char ch1[20];
	scanf("%s",ch1);
	struct student *body;
	body=head->next;
	while(body!=NULL)
	{
		if(strcmp(ch1,body->stu_id)==0)
		{
			printf("\n��ѧ������ϢΪ��\n");
			printf("ѧ�ţ�%-20s ������%-20s ���䣺%-3d Ӣ�%-5.2f ��ѧ��%-5.2f ���ģ�%-5.2f ������%-5.2f\n",\
					body->stu_id,body->name,body->age,body->english,body->math,body->chinese,body->pe);
			break;
		}
		body=body->next;
	}
	if(body==NULL)
		printf("���޴��ˣ�\n");
	system("pause");
	while(1)
	{
		printf("\n�Ƿ񷵻����˵���Y or N��:\n");
		char ch,ch2;
		ch2=getchar();
		ch=getchar();
		if(ch=='N')
			{
				system("cls");
				printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
				system("pause");
				break;
			}
		else if(ch=='Y')
			{
				system("cls");
				main();
				break;
			}
		else
			printf("error! try again!!\n");
	}
}


void add()
{
	FILE* fp=fopen("ѧ���ɼ�.txt","ab");
	struct student stu;
	printf("������ѧ����Ϣ��ѧ��Ϊ-1ʱ��������\n");
	while(1)
	{
			printf("ѧ��ѧ�ţ�");
			scanf("%s",stu.stu_id);
			if(strcmp(stu.stu_id,"-1")==0)
			{
				printf("���ʧ�ܣ���\n");
				break;
			}
			printf("ѧ��������");
			scanf("%s",stu.name);
			printf("ѧ�����䣺");
			scanf("%d",&stu.age);
			printf("ѧ��Ӣ��ɼ���");
			scanf("%f",&stu.english);
			printf("ѧ����ѧ�ɼ���");
			scanf("%f",&stu.math);
			printf("ѧ�����ĳɼ���");
			scanf("%f",&stu.chinese);
			printf("ѧ�������ɼ���");
			scanf("%f",&stu.pe);
			if(fwrite(&stu,sizeof(struct student),1,fp)==1)
				printf("��ӳɹ�����\n");
	}
	fclose(fp);
	system("pause");
	while(1)
	{
		printf("\n�Ƿ񷵻����˵���Y or N��:\n");
		char ch,ch2;
		ch2=getchar();
		ch=getchar();
		if(ch=='N')
			{
				system("cls");
				printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
				system("pause");
				break;
			}
		else if(ch=='Y')
			{
				system("cls");
				main();
				break;
			}
		else
			printf("error! try again!!\n");
	}
}

void del()
{
	FILE* fp=fopen("ѧ���ɼ�.txt","rb+");
	struct student *head,*end,*body1,*body,stu,*p;
	head=(struct student*)malloc(sizeof(struct student));
	end=head;
	if(fread(&stu,sizeof(struct student),1,fp)!=1)
	{
		printf("û��ѧ����Ϣ\n");
		fclose(fp);
		return;
	}
	rewind(fp);
	while(fread(&stu,sizeof(struct student),1,fp)==1)
	{
		body1=(struct student*)malloc(sizeof(struct student));
		strcpy(body1->stu_id,stu.stu_id);
		body1->age=stu.age;
		body1->chinese=stu.chinese;
		body1->english=stu.english;
		body1->math=stu.math;
		body1->pe=stu.pe;
		strcpy(body1->name,stu.name);
		end->next=body1;
		end=body1;
	}
	end->next=NULL;
	fclose(fp);
	output(head);
	FILE* fp1=fopen("ѧ���ɼ�.txt","wb+");
	printf("��������Ҫɾ����ѧ����ѧ�ţ�\n");
	scanf("%s",stu.stu_id);
	p=head;
	body=p->next;
	while(body!=NULL)
	{
		if(strcmp(stu.stu_id,body->stu_id)==0)
		{
			p->next=body->next;
			free(body);
			break;
		}
		p=body;
		body=body->next;
	}
	if(body==NULL)
		printf("��ѧ�������ڣ���\n");
	else
		printf("ɾ���ɹ�����\n");
	body=head->next;
	while(body!=NULL)
	{
		fwrite(body,sizeof(struct student),1,fp1);
		body=body->next;
	}
	fclose(fp1);
	system("pause");
	while(1)
	{
		printf("\n�Ƿ񷵻����˵���Y or N��:\n");
		char ch,ch2;
		ch2=getchar();
		ch=getchar();
		if(ch=='N')
			{
				system("cls");
				printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
				system("pause");
				break;
			}
		else if(ch=='Y')
			{
				system("cls");
				main();
				break;
			}
		else
			printf("error! try again!!\n");
	}
}

struct student * ref()
{
	struct student *head,*body1,*end,stu;
	FILE *fp=fopen("ѧ���ɼ�.txt","rb+");
	head=(struct student*)malloc(sizeof(struct student));
	end=head;
	while(fread(&stu,sizeof(struct student),1,fp)==1)
	{
		body1=(struct student*)malloc(sizeof(struct student));
		strcpy(body1->stu_id,stu.stu_id);
		body1->age=stu.age;
		body1->chinese=stu.chinese;
		body1->english=stu.english;
		body1->math=stu.math;
		body1->pe=stu.pe;
		strcpy(body1->name,stu.name);
//		printf("ѧ�ţ�%-20s ������%-20s ���䣺%-3d Ӣ�%-5.2f ��ѧ��%-5.2f ���ģ�%-5.2f ������%-5.2f\n",\
				body1->stu_id,body1->name,body1->age,body1->english,body1->math,body1->chinese,body1->pe);
		end->next=body1;
		end=body1;
	}
	end->next=NULL;
	rewind(fp);
	if(fread(&stu,sizeof(struct student),1,fp)!=1)
	{
		printf("û��ѧ����Ϣ\n");
		fclose(fp);
		return 0;
	}
	fclose(fp);
	output(head);
	char ch,ch2;
	ch2=getchar();
	while(1)
	{
		printf("\n�Ƿ񷵻����˵���Y or N��:\n");
		ch=getchar();
		ch2=getchar();
		if(ch=='N')
			{
				system("cls");
				printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
				system("pause");
				break;
			}
		else if(ch=='Y')
			{
				system("cls");
				main();
				break;
			}
		else
			printf("error! try again!!\n");
	}
	return head;
}

void sort()
{
	struct student *head,*body,*body1,p1;
	head=ref1();
	if(head==0)
		return ;
	body=head->next;
	while(body->next!=NULL)
	{
		body1=body;
		while(body1!=NULL)
		{
			if(strcmp(body->stu_id,body1->stu_id)>0)
			{
				strcpy(p1.stu_id,body->stu_id);
				strcpy(body->stu_id,body1->stu_id);
				strcpy(body1->stu_id,p1.stu_id);
				p1.age=body->age;
				body->age=body1->age;
				body1->age=p1.age;
				p1.chinese=body->chinese;
				body->chinese=body1->chinese;
				body1->chinese=p1.chinese;
				p1.english=body->english;
				body->english=body1->english;
				body1->english=p1.english;
				p1.math=body->math;
				body->math=body1->math;
				body1->math=p1.math;
				strcpy(p1.name,body->name);
				strcpy(body->name,body1->name);
				strcpy(body1->name,p1.name);
				p1.pe=body->pe;
				body->pe=body1->pe;
				body1->pe=p1.pe;
			}
			body1=body1->next;
		}
		body=body->next;
	}
	printf("ѧ�Ŵ�С��������");
	output(head);
	char ch,ch2;
	ch2=getchar();
	while(1)
	{
		printf("\n�Ƿ񷵻����˵���Y or N��:\n");
		ch=getchar();
		ch2=getchar();
		if(ch=='N')
			{
				system("cls");
				printf("ϵͳ���˳�����ӭ�ٴ�ʹ�ã�\n");              //�˳���ϵͳ
				system("pause");
				break;
			}
		else if(ch=='Y')
			{
				system("cls");
				main();
				break;
			}
		else
			printf("error! try again!!\n");
	}
}

void output(struct student *head)
{
	struct student * body;
	body=head->next;
	printf("\n\n����ѧ����ϢΪ��\n");
	while(body!=NULL)
	{
		printf("ѧ�ţ�%-20s ������%-20s ���䣺%-3d Ӣ�%-5.2f ��ѧ��%-5.2f ���ģ�%-5.2f ������%-5.2f\n",\
				body->stu_id,body->name,body->age,body->english,body->math,body->chinese,body->pe);
		body=body->next;
	}
}

struct student * ref1()
{
	struct student *head,*body1,*end,stu;
	FILE *fp=fopen("ѧ���ɼ�.txt","rb+");
	head=(struct student*)malloc(sizeof(struct student));
	end=head;
	while(fread(&stu,sizeof(struct student),1,fp)==1)
	{
		body1=(struct student*)malloc(sizeof(struct student));
		strcpy(body1->stu_id,stu.stu_id);
		body1->age=stu.age;
		body1->chinese=stu.chinese;
		body1->english=stu.english;
		body1->math=stu.math;
		body1->pe=stu.pe;
		strcpy(body1->name,stu.name);
//		printf("ѧ�ţ�%-20s ������%-20s ���䣺%-3d Ӣ�%-5.2f ��ѧ��%-5.2f ���ģ�%-5.2f ������%-5.2f\n",\
				body1->stu_id,body1->name,body1->age,body1->english,body1->math,body1->chinese,body1->pe);
		end->next=body1;
		end=body1;
	}
	end->next=NULL;
	rewind(fp);
	if(fread(&stu,sizeof(struct student),1,fp)!=1)
	{
		printf("û��ѧ����Ϣ\n");
		fclose(fp);
		return 0;
	}
	fclose(fp);
	return head;
}
