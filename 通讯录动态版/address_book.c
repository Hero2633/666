#define _CRT_SECURE_NO_WARNINGS
#include"��ͷ.h"
void mean()
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("*****   ͨѶ¼����ϵͳ   *****\n");//
	printf("*****   0-�˳���ϵͳ	 *****\n");//
	printf("*****   1-������ϵ��	 *****\n");//
	printf("*****	2-ɾ����ϵ��	 *****\n");//
	printf("*****	3-������ϵ��	 *****\n");//
	printf("*****	4-�޸���ϵ��	 *****\n");//
	printf("*****	5-�����ϵ��	 *****\n");//
	printf("*****	6-��������	 *****\n");//
	printf("******************************\n");//

}
int main()
{
	int input = 0;

	book books ;
	people*str = (people*)malloc(sizeof(people));
	if (str == NULL)
	{
		perror("main");
		return 0;
	}
	else
	{
		(&books)->date = str;
		(&books)->sz = 0;
		(&books)->ad = 1;
	
	}
	do {

		mean();
		
		printf("���������������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case Exit:
			exits(&books);
			system("cls");
			printf("\n�˳�ϵͳ\n");
			break;
		case Add:system("cls");
			Add_people(&books);;
			break;
		case backspace:system("cls");
			delete(&books);
			break;
		case find:system("cls");
			Find(&books);
			break;
		case amend:system("cls");
			Amend(&books);
			break;
		case output:system("cls"); 
			outputt(&books);
			break;
		case about:
			system("cls");
			About(); 
			break;
		default:system("cls");
			break;
		}

	} while (input);
	return 0;

}