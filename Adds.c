#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d",&n);
//	int arr[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (int j = 0; j < n - 1; j++)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = 0;
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	for (int j = 0; j < n-1; j++)
//	{
//		if (arr[j] == arr[j + 1])
//		{
//			
//			for (int k = j; k < n-1; k++)
//			{
//				
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			j--;
//		}
//	}
//	for (int h = 0; h <n; h++)
//	{
//		printf("%d ",arr[h]);
//	}
//
//	return 8;
//
//}
int main()
{
	int arr[100] = {0};
	int n = 0;
	int k = 1;//����û0���룬k��Ϊ1
	scanf("%d",&n);
	for (int j = 0; j < n; j++)
	{
		int m;
		scanf("%d",&m);
		if (m == 0)//�����0��������ô�ҵ�k�ͱ���Ϊ0��û��0������k��һֱ��1��
		{
			k = 0;
		}
		arr[m] = m;

	}
	for (int i = 1; i < 100; i++)
	{
		if (k == 0)
		{
			printf("%d ", arr[0]);
			k = 1;//�����ӡ��һ���������ܣ�����k���¸�ֵΪ1������ֻ��Ҫ��ӡһ��0����
		}
		if (arr[i] != 0)
			printf("%d ",arr[i]);
	}
	return 0;
}