#define _CRT_SECURE_NO_WARNINGS
#include"address book.h"
void mean()
{
	printf("*****   ͨѶ¼����ϵͳ   *****\n");//
	printf("*****   0-�˳���ϵͳ	 *****\n");//
	printf("*****   1-������ϵ��	 *****\n");//
	printf("*****	2-ɾ����ϵ��	 *****\n");//
	printf("*****	3-������ϵ��	 *****\n");
	printf("*****	4-�޸���ϵ��	 *****\n");//
	printf("*****	5-�����ϵ��	 *****\n");//
    printf("*****	6-��������	 *****\n");
	printf("******************************\n");

}
int main()
{
	int input = 0;
	
	book books = {0};
	do {
		
		mean();
		/*system("cls");*/
		printf("���������������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{case Exit:
			printf("\n�˳�ϵͳ\n");
			break;
		case Add:
			Add_people(&books);;
			break;
		case backspace:
			delete(&books);
			break;
		case find:
			Find(&books);
			break;
		case amend:
			Amend(&books);
			break;
		case output:outputt(&books);
			break;
		case about:
			About(); ;
			break;
		default :
			break;
		}
		
	} while (input);
	return 0;

}