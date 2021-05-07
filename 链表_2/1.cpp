#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct infor{
	char name[10];
	int age;
	float score;
	struct infor* next;
};

//�����������������ݣ�
struct infor* link(int len)
{
	struct infor* end,*body,*head;
	head=(struct infor*)malloc(sizeof(struct infor));
	end=head;
	for(int i=0;i<len;i++)
	{
		body=(struct infor*)malloc(sizeof(struct infor));
		printf("������ѧ��������\nname:");
		scanf("%s",body->name);
		printf("������ѧ�����䣺\nage:");
		scanf("%d",&body->age);
		printf("������ѧ��������\nscore:");
		scanf("%f",&body->score);
		end->next=body;
		end=body;
	}
	end->next=NULL;
	return head;
}

//���ѧ�����ݣ�
void output (struct infor* head)
{
	struct infor* body;
	int i=0;
	body=head->next;
	while(body!=NULL)
	{
		i++;
		printf("��%dλѧ����Ϣ��\n",i);
		printf("ѧ��������%-5s",body->name);
		printf("ѧ�����䣺%-3d",body->age);
		printf("ѧ���ɼ���%-4.2f",body->score);
		body=body->next;
		printf("\n");
	}
}

//����
struct infor* sort(struct infor* head)
{
	struct infor* p,* p1,p2;
	p=head;
	p=head->next;
	while(p->next!=NULL)
	{
		p1=p->next;
		if(p->score<p->next->score)
		{
			p2.score=p1->score;
			p1->score=p->score;
			p->score=p2.score;
			strcpy(p2.name,p1->name);
			strcpy(p1->name,p->name);
			strcpy(p->name,p2.name);
			p2.age=p1->age;
			p1->age=p->age;
			p->age=p2.age;
		}
		p=p->next;
	}
	return head;
}

int main()
{
	struct infor* head=NULL;
	int len;
	printf("������ѧ��������\nlen=");
	scanf("%d",&len);
	head=link(len);
	printf("\n\n");
	output(head);
	printf("���ɼ��߰�˳�����У�\n");
	head=sort(head);
	output(head);
	printf("\n");
	return 0;
}