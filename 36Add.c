#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char res[20] = {0};//����һ��ȫ���ַ����飬�����洢���յĽ��

int getInt(char n)//��'0'-'9'ת��Ϊ0-9��'a'-'z'ת����10-35
{
	if (n >= '0' && n <= '9')
		return n - '0';
	else
	{
		return n - 'a' + 10;
	}
}

char getChar(int n)//��0-9ת��Ϊ'0'-'9';a-zת���ɡ�a'-��z'
{
	if (n >= 0 && n <= 9)
		return n + '0';
	else
		return n - 10 + 'a';
}
void My_reverse(char* p, int len)
{
	char* tail = p + len - 1;
	while (p <= tail)
	{
		char t = *tail;
		*tail = *p;
		*p = t;
		p++;
		--tail;
	}
}
char*Add36(char *c1,char *c2)
{
	int len1 = (int)strlen(c1);
	int len2 = (int)strlen(c2);
	int i = len1 - 1;
	int j = len2 - 1;
	int tail = 0;
	int k = 0;
	
	while (j >-1&& i>-1)
	{
		int x = getInt(c1[i]);
		int y = getInt(c2[j]);
		int tmp = (x+y + tail) % 36;//������Ϊ��λ���
		tail = (x+y + tail) / 36;//�̵Ļ���Ϊ������1
		res[k] = getChar(tmp);
		j--;
		--i;
		k++;
	}
	if (i==-1&&j!=-1)//c1�����Ԫ�������ˣ�c2���滹��ʣ��
	{
		while (j>-1)
		{
			int y = getInt(c2[j]);
			int tmp = ( y+tail) % 36;//����
			tail = ( y+ tail) / 36;//����
			res[k] = getChar(tmp);
			j--;
			k++;
		}
	}
	if(j==-1&&i!=-1)//c1�����Ԫ�������ˣ�c2���滹��ʣ��
	{
		while (i>-1)
		{
			int x = getInt(c1[i]);
			int tmp = (x + tail) % 36;//����
			tail = (x+ tail) / 36;//����
			res[k] = getChar(tmp);
			i--;
			k++;
		}
	}
	int len = (int)strlen(res);
	My_reverse(res, len);//���Ļ����ֲ�Ԫ��ת��һ�£�
	return res;
}
int main()
{
	char c1[] = { "1b" };
	char c2[] = { "2x" };
	char* ret=Add36(c1,c2);
	printf("%s ",ret);
	return 0;
}
