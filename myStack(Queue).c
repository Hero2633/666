#define _CRT_SECURE_NO_WARNINGS
typedef int QDataType;
// ��ʽ�ṹ����ʾ���� 
typedef struct QListNode
{
	struct QListNode* next;
	QDataType data;
}QNode;

// ���еĽṹ 
typedef struct Queue
{
	int count;
	QNode* head;
	QNode* tail;
}Queue;

// ��ʼ������ 
void QueueInit(Queue* q);
// ��β����� 
void QueuePush(Queue* q, QDataType data);
// ��ͷ������ 
void QueuePop(Queue* q);
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q);
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q);
// ��ȡ��������ЧԪ�ظ��� 
int Queue_Size(Queue* q);
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* q);
// ���ٶ��� 
void QueueDestroy(Queue* q);
// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);
	q->head = NULL;
	q->tail = NULL;
	q->count = 0;

}
// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	if (q->head == NULL)
	{
		QNode* newnote = (QNode*)malloc(sizeof(QNode));
		assert(newnote);
		q->head = newnote;
		q->tail = newnote;
		newnote->data = data;
		newnote->next = NULL;
	}
	else
	{
		QNode* newnote = (QNode*)malloc(sizeof(QNode));
		assert(newnote);
		newnote->data = data;
		q->tail->next = newnote;
		q->tail = newnote;
		newnote->next = NULL;

	}
	q->count++;
}
// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);

	assert(q->head);
	QNode* next = q->head->next;
	free(q->head);
	q->head = next;
	if (q->head == NULL)
		q->tail = NULL;
	q->count--;

}
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->head);
	return q->head->data;
}

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{

	assert(q);
	assert(q->tail);
	return q->tail->data;

}
// ��ȡ��������ЧԪ�ظ��� 
int Queue_Size(Queue* q)
{
	assert(q);
	return q->count;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->count == 0;

}
// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->head;

	while (cur != NULL)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
}

typedef struct {
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate() {
	MyStack* tmp = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&tmp->q1);
	QueueInit(&tmp->q2);
	return tmp;
}

void myStackPush(MyStack* obj, int x) {
	Queue* Empty = &obj->q1;
	Queue* noEmpty = &obj->q2;
	if (QueueEmpty(&obj->q2))
	{
		Empty = &obj->q2;
		noEmpty = &obj->q1;

	}
	QueuePush(noEmpty, x);

}

int myStackPop(MyStack* obj) {
	Queue* Empty = &obj->q1;
	Queue* noEmpty = &obj->q2;
	if (QueueEmpty(&obj->q2))
	{
		Empty = &obj->q2;
		noEmpty = &obj->q1;

	}
	while (Queue_Size(noEmpty) != 1)
	{
		QueuePush(Empty, QueueFront(noEmpty));
		QueuePop(noEmpty);
	}
	QDataType tmp = QueueFront(noEmpty);
	QueuePop(noEmpty);
	return tmp;
}

int myStackTop(MyStack* obj) {
	Queue* Empty = &obj->q1;
	Queue* noEmpty = &obj->q2;
	if (QueueEmpty(&obj->q2))
	{
		Empty = &obj->q2;
		noEmpty = &obj->q1;

	}
	return QueueBack(noEmpty);
}

bool myStackEmpty(MyStack* obj) {
	return obj->q1.count == 0 && obj->q2.count == 0;
}

void myStackFree(MyStack* obj) {
	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);
	free(obj);
	obj = NULL;
}