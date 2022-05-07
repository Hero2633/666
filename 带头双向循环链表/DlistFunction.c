#define _CRT_SECURE_NO_WARNINGS
#include"Dlist.h"
//�ڱ�λ
List* Dummyhead()
{
	List* head = (List*)malloc(sizeof(List));
	assert(head);
	head->next = head;
	head->prev = head;
	head->val = 3;
	return head;

}
//��ӡ
void ListPrintf(const List*const dummyhead)
{
	assert(dummyhead);
	if (dummyhead->next == dummyhead)
	{
		printf("�����Ѿ�Ϊ��,�벻Ҫ�ڼ���������\n");
		return;
	}
	List* cur = dummyhead->next;
	while (cur != dummyhead)
	{
		printf("%d-",cur->val);
		cur = cur->next;
	}
	putchar('\n');
}
//�����½ڵ�
List* NewNote()
{
	List* head = (List*)malloc(sizeof(List));
	return head;
}
int Count(List*dummyhead)
{
	assert(dummyhead);
	List* tmp = dummyhead->next;
	int count = 0;
	while (tmp != dummyhead)
	{
		count++;
		tmp = tmp->next;
	}
	return count;
}
//β��
void TailInsert(List*dummyhead,TYPE x)
{
	
	List* newnote = NewNote();
	newnote->val = x;
	List* tail = dummyhead->prev;
	tail->next = newnote;
	newnote->prev = tail;
	dummyhead->prev = newnote;
	newnote->next = dummyhead;
}
//βɾ
void TailDel(List* dummyhead) 
{
	assert(dummyhead);//�ж�����ͷ�ڵ��Ƿ�Ϊ��
	assert(dummyhead->next!=dummyhead);//��ֹ������ͷ�ڵ�ɾ����
	List* tail = dummyhead->prev;
	List* front = tail->prev;
	free(tail);
	front->next = dummyhead;
	dummyhead->prev = front;
}
//ͷ��
void HeadInsert(List* dummyhead,TYPE x)
{
	assert(dummyhead);
	List* head = dummyhead->next;
	List* newnote = NewNote();
	newnote->val = x;
	newnote -> next = head;
	head->prev = newnote;
	newnote->prev = dummyhead;
	dummyhead->next = newnote;
}
//ͷɾ
void HeadDel(List* dummyhead)
{
	
	assert(dummyhead);
	assert(dummyhead->next!=dummyhead);
	List* next = dummyhead->next;
	List* nextnext = next->next;
	free(next);
	dummyhead->next = nextnext;
	nextnext->prev = dummyhead;
	
}
//����[pos]��Ԫ�����ڽڵ�
List* FindVal(List* dummyhead, TYPE pos)
{
	assert(dummyhead);
	List* cur = dummyhead;
	int count = Count(dummyhead);
	assert(count);
	assert(pos<=count&&pos>=1);
	while (pos--)
	{
		cur = cur->next;

	}
	return cur;
}
//�޸�[pos]���ڽڵ��ֵ
void BoardVal(List* dummyhead, TYPE pos, TYPE x)
{
	assert(dummyhead);
	List* cur = dummyhead->next;
	assert(cur != dummyhead);
	int count = Count(dummyhead);
	assert(count);
	assert(pos <= count && pos >= 1);
	while (--pos) {
	
		cur = cur->next;
	}
	cur->val = x;


}
//ɾ��[pos]λ�õؽڵ�
void DelPos(List* dummyhead,TYPE pos)
{
	assert(dummyhead);
	List* cur = dummyhead->next;
	assert(cur != dummyhead);
	int count = Count(dummyhead);
	assert(count);
	assert(pos <= count && pos >= 1);
	while (--pos) {

		cur = cur->next;
	}
	List* Front = cur->prev;
	List* next = cur->next;
	free(cur);
	Front->next = next;
	next->prev = Front;

}
//��[pos]�����
void PosTail(List* dummyhead, TYPE pos, TYPE x)//pos==0�൱��ͷ��
{
	List* newnote = NewNote();
	assert(dummyhead);
	List* cur = dummyhead->next;
	int count = Count(dummyhead);
	assert(pos <= count && pos >= 0);
	if (pos == 0)
	{
		HeadInsert(dummyhead, x);
	}
	else
	{
		while (--pos) {

			cur = cur->next;
		}
		newnote->val = x;
		List* next = cur->next;
		newnote->next = next;
		next->prev = newnote;
		cur->next = newnote;
		newnote->prev = cur;
	}
}
//��posǰ����
void FrontPos(List* dummyhead, TYPE pos, TYPE x)//pos==0,β��
{
	List* newnote = NewNote();
	assert(dummyhead);
	List* cur = dummyhead->next;
	int count = Count(dummyhead);
	assert(pos <= count && pos >= 0);
	if (pos == 0)
	{
		TailInsert( dummyhead,  x);
	}
	else
	{
		while (--pos) {

			cur = cur->next;
		}
		List* Front = cur->prev;
		newnote->val = x;
		newnote->next = cur;
		Front->next = newnote;
		newnote->prev = Front;
		cur->prev = newnote;
	}

}
//��������
List* Destroy(List* dummyhead)
{
	assert(dummyhead);
	assert(dummyhead->next!=dummyhead);
	List* cur = dummyhead->next;
	while (cur != dummyhead)
	{
		List* tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	free(cur);
	cur = NULL;
	return NULL;

}