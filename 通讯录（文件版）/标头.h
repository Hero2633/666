#pragma once
#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define Max_name 20
#define Max_sex 10
#define Max_addres 20
#define Max_num 20
enum win
{
	Exit,
	Add,
	backspace,
	find,
	amend,
	output,
	about,
};

typedef struct people//���˻�����Ϣ��
{
	char name[Max_name];
	char num[Max_num];
	char sex[Max_sex];
	char addres[Max_addres];
	int age;
}people;
typedef struct book
{
	people* date;//���ڽ��տ��ٵĶ�̬�ռ�
	int sz;//���ڱ�ʾ��ŵ���ϵ�˸�����
	int ad;//���ݵ�����
}book;
void Add_people(struct book* pf);//����������ϵ�˵ĺ�����
void outputt(book* pf);//������ӡͨѶ¼��
void delete(book* pf);//ɾ����ϵ�ˣ�
void About();//�������ߣ�
void Find(const book* pf);//������ϵ��
void Amend(book* pf); //�޸���ϵ��
void exits(book* pf);//�ͷ��ڴ�
void save(book*pf);//��������
