#pragma once
#include <stdio.h>
#include <stdlib.h>                      //�����ͷ�ļ�
#include <time.h>                        //����python�е�time��
#define Hang 9
#define Lie 9
#define Hangs Hang+2
#define Lies Lie+2
#define EASY_COUNT 10
void startarr(char arr[Hangs][Lies], int hang, int lie, char set);        //��ʼ������
void printarr(char arr[Hangs][Lies], int hang, int lie);        //��ӡ����
void Setmine(char arr1[Hangs][Lies], int hang, int lie);      //������
void Findmine(char arr1[Hangs][Lies], char arr2[Hangs][Lies], int hang, int lie);     //�Ų���
int get_lei(char arr1[Hangs][Lies], int x, int y);            //�õ���Χ�׵ĸ���