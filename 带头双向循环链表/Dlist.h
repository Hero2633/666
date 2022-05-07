#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int TYPE;
struct Dlist
{
	TYPE val;
	struct Dlist* next;
	struct Dlist* prev;

};
typedef struct Dlist List;
//�ڱ�λ
List* Dummyhead();
// ��ӡ
 void ListPrintf(const List*const dummyhead);
// ���ٽڵ�
 List* NewNote();
 int Count(List*dummyhead);
//ͷ��
 void HeadInsert(List*dummyhead,TYPE x);
//ͷɾ
 void HeadDel(List*dummyhead);
//β��
 void TailInsert(List*dummyhead,TYPE x);
//βɾ
 void TailDel(List*dummyhead);
//����[pos]�Ľڵ�
List* FindVal(List*dummyhead,TYPE pos);
//��posǰ����
void FrontPos(List*dummyhead,TYPE pos,TYPE x);
//�޸�[pos]������
void BoardVal(List*dummyhead,TYPE pos,TYPE x);
//ɾ��pos������
void DelPos(List*dummyhead,TYPE pos);
// ��[pos]�����
void PosTail(List* dummyhead, TYPE pos, TYPE x);
//��������
List* Destroy(List*dummyhead);