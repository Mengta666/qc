#include <stdio.h>

typedef struct student {
	char name[30];
	int age;
	float score;
}stu;

int main()
{
	stu stu[5];
	int i = 0;
	FILE *fp;
	fp = fopen("D:\\b.txt", "rb+");
	/*
	printf("������ѧ����Ϣ(name��age,score)��\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%s %d %f", stu[i].name, &stu[i].age, &stu[i].score);
	}
	for (i = 0; i < 5; i++)
	{
		if (fwrite(&stu[i], sizeof(stu), 1, fp) != 1)
			printf("������\n");
	}
	*/
	rewind(fp);
	printf("���ѧ�����£�\n");
	for (i = 0; i < 5; i++)
	{
		if (fread(&stu[i], sizeof(stu), 1, fp) != 1)
			printf("������\n");
		else
		{
			printf("%s %d %f\n", stu[i].name, stu[i].age, stu[i].score);
		}
	}
	fclose(fp);
}