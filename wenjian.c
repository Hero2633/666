#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	FILE* pt = fopen("test.txt","w");//���ļ�
//	if (pt==NULL)
//	{
//		perror("main");
//		return 0;
//
//	}
//	//д�ļ�
//	fputc('a', pt);
//	fputc('a', pt);
//	fputc('a', pt);
//	char a=fputc('a',pt);//int fputc ( int character, FILE * stream );���д��ɹ����򷵻�д����ַ��İ�˹����ֵ��д��ʧ�ܵĻ��;ͷ���EOF��
//	printf("%d", a);
//	fclose(pt);
//	pt = NULL;
//
//	//�ر��ļ�
//	return 0;
//}
//int main()
//{
//	FILE* pt = fopen("test.txt", "w");
//	//���ļ�
//	if (pt == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	//д�ļ�
//	fputs("abcd\n\0ef",pt);//int fputs ( const char * str, FILE * stream );��д��ɹ��Ļ��ͷ��طǸ�ֵ�����д��ʧ�ܵĻ��ͻ᷵��EOF��
//	fputs("���ؿƼ�",pt);
//	fputc('6', pt);
//	//�ر��ļ�
//	fclose(pt);
//	pt = NULL;
//	return 0;
//}
//int main()
//{
//	//���ļ�
//	FILE* pt = fopen("test.txt","r");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 8;
//	}
//	//���ļ�
//	
//
//	char q = fgetc(pt);//int fgetc ( FILE * stream );�����ȡ�ɹ����򷵻ظ��ַ��İ�˹����ֵ;
// ����ʱ��ָʾ�������ļ�ĩβ���򷵻�EOF���������ļ�ĩβָʾ����feof��
//	 fgetc(pt);//�������������ȡ���󣬸ú���Ҳ�᷵�� EOF�������Ϊ���������ָʾ����ferror����
//	int d=fgetc(pt);//
//		printf("%d ",d);
//
//	//�ر��ļ�
//		fclose(pt);
//		pt = NULL;
//
//	return 9;
//}
//int main()
//{
//	//���ļ�
//	FILE* pt = fopen("test.txt", "r");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 8;
//	}
//	//���ļ�
//	
//	char tmp[100] = {0};
//	fgets(tmp, 37, pt);//char * fgets(char* str, int num, FILE * stream);�ú���ֻ���ȡnum-1���ַ��������ȡ�ɹ��ⷵ��str����ʱstr��ָ�����ѱ��ı䣩
//	printf("%s", tmp);//��ȡʧ�ܷ��ؿ�ָ�루str��ָ���ݿ����ѱ��ı䣩
//	//������\n���ֹͣ��ȡ������\n�ᱻ��Ϊ��Ч�ַ����ڶ�ȡʱ���������ļ�ĩβ��ʶ����ᱨ��
//	// ����֮ǰ�����ļ�ĩβ��ʶ����᷵��strԭ����ָ�룬��ʱ��str��ָ����δ�䣩
//	//�ر��ļ�
//	fclose(pt);
//	pt = NULL;
//
//	return 9;
//}
//int main()
//{
//	FILE* pt = fopen("test.txt","w");
//	if (pt ==NULL)
//	{
//		perror("main:");
//		return 9;
//
//	}
//	int a = 90;
//	char sth[] = {"China!6766"};
//	fprintf(stdout,"%d %s",a,sth);//fprintf()�÷���printf��ֻ࣬����printfֻ����stdout�����������fprintf�����κ�������������
// fclose(pt);
// pt=NULL;
//	return 0;
//}
//int main()
//{
//	/*FILE* p = fopen("test.txt","r");
//	if (p == NULL)
//	{
//		perror("main:");
//		return 8;
//	}
//	char a[16] = {3};
//	fscanf(p,"%s",&a);//.fscanf������scnaf����һ���÷���scanfֻ�ܴ�stdin���ж�ȡ��������fscanf�ܴ��κ��������ж�ȡ
//	fprintf(stdout,"%s",a);
//	fclose(p);
//	p = NULL;*/
//	return 9;
//}
typedef struct s
{
	
	char q[12];

}ed;
//int main()
//{
//	FILE* pt = fopen("test.txt","w");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 8;
//	}                     //size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//
//	ed d= { 'a',"I love China!",12,3.1415f };
//	fwrite(&d,sizeof(ed),1,pt);
//	fclose(pt);
//	pt = NULL;
//	return 9;
//}
//int main()
//{
//	FILE* pt = fopen("test.txt","r");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 7;
//
//	}
//	ed f = { 0 };
//	fread(&f,sizeof(ed),1,pt);//size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//	f.q[11] = 0;
//	fclose(pt);
//	pt = NULL;
//	fprintf(stdout,"%s",f.q);
//		return 8;
//
//}

