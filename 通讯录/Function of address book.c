#define _CRT_SECURE_NO_WARNINGS
#include"address book.h"
void Add_people( book*pf)
{
	printf("����:");
	scanf("%s", pf->date[pf->sz].name);
	printf("ѧ��:");
	scanf("%s", pf->date[pf->sz].num);
	printf("�Ա�:");
	scanf("%s", pf->date[pf->sz].sex);
	printf("��ַ:");
	scanf("%s", pf->date[pf->sz].addres);
	printf("����:");
	scanf("%d", &pf->date[pf->sz].age);
      pf->sz++;

}
void outputt(book* pf)
{
	int i = 0;
	printf("%-20s\t%-20s\t%-10s\t%-20s\t%-10s\n", "����", "ѧ��", "�Ա�", "��ַ", "����");
	for (i = 0; i < pf->sz;i++)
	{
		
		printf("%-20s\t%-20s\t%-10s\t%-20s\t%-2d\n", pf->date[i].name, pf->date[i].num, pf->date[i].sex, pf->date[i].addres, pf->date[i].age);
	}

}
void delete(book* pf)
{
	int k = 0;
	char nums[20] = { 0 };
	char ch[20] = {0};
	printf("��������ɾ�����˵�����:");
		scanf("%s", ch);
		printf("Ϊ�������������������ɾ�����˵�ѧ��:");
		scanf("%s", nums);
		for (int i = 0; i < pf->sz; i++)
		{
			if ((strcmp(ch, pf->date[i].name) == 0) && (strcmp(nums, pf->date[i].num) == 0))
			{
				for (int j =i; j < pf->sz ; j++)
				{
					pf->date[j] = pf->date[j + 1];
					k = 1;
				}
			}
			if (k == 1)
				break;
		}
		if (k == 1)
		{
			pf->sz--;
			printf("\n**********ɾ���ɹ�***********\a\a\a\n");
		}
		else
		{
			printf("\n********û���ҵ�����Ҫɾ������********\a\a\n");
		}
		/*delete(pf);*/ outputt(pf);
}
void About()
{
	printf("\n����:���ؿƼ�\n�꼶:��һ\n�汾:���ڵͼ�ˮƽ\nȱ��:1.Ч��̫�ͣ�һ����ֻ�ܴ�һ��\n2.�������ᵼ�´����ڴ汻�˷�\n�в���ĵط�����ӭ�������������\n");

}
void Find(const book* pf)
{
	int k = 0;
	char nums[20] = { 0 };
	char ch[20] = { 0 };
	printf("����������ҵ��˵�����:");
	scanf("%s", ch);
	printf("Ϊ��ȷ����������������ҵ��˵�ѧ��:");
	scanf("%s", nums);
	for (int i = 0; i < pf->sz; i++)
	{
		if (strcmp(ch, pf->date[i].name) == 0 && strcmp(nums, pf->date[i].num) == 0)
		{
			printf("%-20s\t%-20s\t%-10s\t%-20s\t%-10s\n", "����", "ѧ��", "�Ա�", "��ַ", "����");
			printf("%-20s\t%-20s\t%-10s\t%-20s\t%-2d\n", pf->date[i].name, pf->date[i].num, pf->date[i].sex, pf->date[i].addres, pf->date[i].age);
			k = 1;
			break;
		}
		
	}
	if (k == 0)
		printf("\n*****����ʧ��*****\n");
	else
		printf("\n*****���ҳɹ�*****\n\n");

}
void Amend(book*pf)
{
	int k = 0;
	char nums[20] = { 0 };
	char ch[20] = { 0 };
	printf("���������޸ĵ��˵�����:");
	scanf("%s", ch);
	printf("Ϊ��������������������޸ĵ��˵�ѧ��:");
	scanf("%s", nums);
	for (int i = 0; i < pf->sz; i++)
	{
		if (strcmp(ch, pf->date[i].name) == 0 && strcmp(nums, pf->date[i].num) == 0)
		{
			printf("����:");
			scanf("%s", pf->date[i].name);
			printf("ѧ��:");
			scanf("%s", pf->date[i].num);
			printf("�Ա�:");
			scanf("%s", pf->date[i].sex);
			printf("��ַ:");
			scanf("%s", pf->date[i].addres);
			printf("����:");
			scanf("%d", &pf->date[i].age);
			k = 1;
			break;
		}

	}
	if (k == 0)
		printf("\n*****�޸�ʧ��*****\n");
	else
		printf("\n*****�޸ĳɹ�*****\n");
	 outputt(pf);


}