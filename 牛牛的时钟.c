#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main()
{
	unsigned int hour = 0;
	unsigned int minute = 0;
	 unsigned int k = 0;
	 printf("�����뵱ǰʱ��:");
   eg1:scanf("%u:%u", &hour, &minute);
	if (hour > 23 || minute >= 60)
	{
		printf("����Ƿ�,����������:");
		goto eg1;
	}
	printf("������������֮�����(min):");
	scanf("%u", &k);
	if (k + minute >= 60)
	{
		hour = hour + (minute + k) / 60;
		minute = (k + minute) % 60;
	}
	if (hour >= 24)
	{
		hour = hour % 24;
	}
	printf("Ԥ��:%02u:%02u", hour, minute);
	return 0;
}