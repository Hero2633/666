#define _CRT_SECURE_NO_WARNINGS
#include"Sql.h"
void SeqlistInitializes(Sheet* pt)//��ʼ��
{
	assert(pt);
	TYPE* tmp = (TYPE*)malloc(sizeof(TYPE) * 8);
	if (tmp == NULL)
	{
		perror("SeqlistInitializes");
		return;
	}
	pt->p = tmp;
	pt->size = 0;
	pt->capacity = 8;


}
void SeqListInit(Sheet* pt,TYPE n)////��������//
{
	capacityl(pt);//����
	pt->p[pt->size] = n;
	pt->size++;
}
void capacityl(Sheet* pt)//�ж��Ƿ���Ҫ����
{assert(pt);
	if (pt->size == pt->capacity)
	{
		TYPE* tmp = (TYPE*)realloc(pt->p, sizeof(TYPE) * (pt->capacity + 1));
			if(tmp == NULL)
			{
				perror("apacityl");
				return;
			}
			pt->p = tmp;
			pt->capacity++;

	}

}//����
void Sheetprintf(const Sheet*pt)//���˳���
{for(int i=0;i<pt->size;i++)
	printf("%d ", pt->p[i]);
}
void SeqListPushBack(Sheet* pt,TYPE n)//β��
{
	assert(pt);
	capacityl(pt);
	pt->p[pt->size] = n;
	pt->size++;

}

void SeqListPushFront(Sheet* pt,TYPE n)//ͷ��//
{
	assert(pt);
	capacityl(pt);
	for (int i = pt->size; i>0; i--)
	{
		pt->p[i] = pt->p[i-1];
	}
	pt->p[0] = n;
	pt->size++;
}
void SeqListPopFront(Sheet* pt)//ͷɾ
{
	assert(pt&&pt->size>0);
	for (int i = 0; i < pt->size-1; i++)
	{
		pt->p[i] = pt->p[i + 1];

	}

	pt->size--;
}
void SeqListPopBack(Sheet* pt)//βɾ
{
	assert(pt->size>0);
	pt->size--;
}
void SeqListPop(Sheet* pt, int n)//���ɾ
{
	if(pt ==NULL|| pt->size > 0||pt->size>n||n>0);
	return;
	for (int i = n - 1; i < pt->size-1; i++)
	{
		pt->p[i] = pt->p[i + 1];
	}
	pt->size--;
}
void SeqListPuch(Sheet* pt, int n,TYPE m)//�������
{
	if(pt==NULL||pt->size>0||n>0||pt->size>=n);
	return;
	capacityl(pt);
	int i = 0;
	for ( i = pt->size; i >= n; i--)
	{
		pt->p[i] = pt->p[i-1];
	}
	pt->p[i] = m;
	pt->size++;
}
void exits(Sheet* pt)//���������ͷ������ٵĿռ䣬
{
	assert(pt);
	free(pt->p);
	pt->p = NULL;
	pt->size = 0;
	pt->capacity = 0;

}
int LocateElem(const Sheet* pt, TYPE n)
{
	assert(pt);
	for (int i = 0; i < pt->size; i++)
	{
		if (pt->p[i] == n)
		{
			return i;//�ҵ��ͷ���i
			break;
		}
		
	}
	
	return -1;//�Ҳ����ͷ���-1��
}
void FindElem(const Sheet* pt, int m)
{
	if (pt->size == 0 || pt->size <= m || m < 0 || pt == NULL)
	{
		printf("��������\n");
		return;
	}
	printf("�����±�Ϊ%d��Ԫ��:%d ",m,pt->p[m]);

}