#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
///////��Դͷ�����ݿ�����Ŀ�ĵأ�����Ŀ�ĵص�ָ������Լ������Լ������������ص����޳�������
//int main()///////////////////////////////////////////////////////////////////////////����num���ַ���2
//{
//	int num = 2;
//	scanf("%d", &num);
//	char arr[] = { "ABCDEF" };
//	while (num--)
//	{
//		int i = 0;//������strcpy���������Լ������Լ�
//		char a = arr[0];
//		strcpy(arr, arr + 1);
//		int len = strlen(arr);
//		char o = arr[len];
//		arr[len] = a;
//		arr[len + 1] = o;
//	}
//	printf("%s", arr);
//	return 0;
//}
//int main()////�ȱ���ǰnum���ַ���������strcoy�����Լ������Լ����ǵ�ǰnum���ַ�
//int main()///////////////////////////////////////////////////////////////////////////����num���ַ���3
//{
//	int num = 3;
//	char arr1[99] = { 0 };
//	char arr[] = { "ABCDEF" };
//	int i = 0;
//	for ( i = 0; i < num; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	strcpy(arr, arr + num);
//	int len = strlen(arr);
//	char o = arr[len];
//	int j = 0;
//	for ( j = len, i=0; i<num&&j < len + num;i++, j++)
//	{
//		arr[j] = arr1[i];
//	}
//	arr[j] = o;
//	printf("%s", arr);
//	return 0;
//}