#pragma once
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int TYPE;
typedef struct Sheet
{
	TYPE *p;
	int size;//��ʾ��ŵ�Ԫ��
	int capacity;//��ʾ��ǰ�ռ��������
}Sheet;


void SeqListInit(Sheet*pt,TYPE);//��������//
void SeqListPushFront(Sheet* pt,TYPE n);//ͷ��//
void SeqListPushBack(Sheet* pt,TYPE n);//β��//
void SeqListPopFront(Sheet* pt);//ͷɾ//
void SeqListPopBack(Sheet* pt);//βɾ//
void SeqListPop(Sheet* pt,int n);//���ɾ//
void SeqListPuch(Sheet* pt,int n,TYPE m);//�������
int LocateElem(const Sheet* pt, TYPE n);//����˳����е�һ������n��ֵ�����������±�
void FindElem(const Sheet* pt, int m);//���ҵ�i��Ԫ�أ�����ӡ��
void SeqlistInitializes(Sheet* pt);//��ʼ��//
void Sheetprintf(Sheet*pt);//���//
void capacityl(Sheet* pt);//����//
void exits(Sheet*pt);//������
































