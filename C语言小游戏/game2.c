#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"
//��ά�����ʼ������
void startarr(char arr[Hangs][Lies], int hang, int lie,char set)     //
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < lie; j++)
		{
			arr[i][j] = set;
		}
	}
}
void printarr(char arr[Hangs][Lies], int hang, int lie)      //ֻ���м�9*9��������в�����ӡ �����к��Լ������
{
	int i = 0;
	int j = 0;
	printf("----------------ɨ����Ϸ-------------------\n");
	for (i = 0; i <= lie; i++)
	{
		printf("%d ", i);        //��ӡ�к�,ȫ���ڵ�һ��
	}
	printf("\n");
	for (i = 1; i <= hang; i++)
	{
		printf("%d ", i);        ///��ӡ�к�,ȫ���ڵ�һ��
		for (j = 1; j <= lie; j++)
		{
			printf("%c ", arr[i][j]);     //��ӡ��i��,�պõ�һ�п����кŲ��ܣ���arr[0]��������
		}
		printf("\n");                    //ÿ��ӡ��һ�к�ǵû���
	}
	printf("----------------ɨ����Ϸ-------------------\n");
}
void Setmine(char arr1[Hangs][Lies], int hang, int lie)
{
	//����10����
	int count = 10;
	while (count)
	{
		//����������±�
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (arr1[x][y] == '0')      //��������λ��û�зŹ���
		{
			arr1[x][y] = '1';      //�Ǿ͸�����һ����
			count--;                //�ɹ����׺�Ż�--������ֱ�ӻص�ѭ���׶˼���ѭ��(�ⲽ�밡��ʹ�����࣡)
		}
	}
}
void Findmine(char arr1[Hangs][Lies], char arr2[Hangs][Lies], int hang, int lie)
{
	//1.�����Ų������
	//2.������괦�ǲ�����
	    //(1)����   --   ���ź�ը����  --  ��Ϸ����
	    //(2)������  --  ͳ��������Χ�м�����  -- �洢�Ų��׵���Ϣ��show���飬��Ϸ����
	int x = 0, y = 0, win = 0;
	while (win <hang*lie - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺\n");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= hang && y >= 1 && y <= lie)
		{
			if (arr1[x][y] == '1')
			{
				printf("m���ˣ�\n");
				printarr(arr1, Hang, Lie);
				break;
			}
			else
			{
				//�����׵Ļ���ͳ��x,y������Χ�м�����
				int count = get_lei(arr1,x,y);
				arr2[x][y] = count + '0';     //ASCIIֵת��Ϊ�ַ�����ֵ���ַ����飬'0'�õ��
				//��ʾ�Ų���׵���Ϣ
				printarr(arr2, Hang, Lie);
				win++;
			}
		}
		else
			printf("���겻�Ϸ������������룡\n");
	}
	if (win == hang * lie - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");      //����ʧ�ܻ���ǰ����whileѭ��������ڴ�ʱ��֪�Լ�ʧ���ˣ����򲻻�ִ�и�if���
		printarr(arr2, Hang, Lie);
	}
}
static int get_lei(char arr1[Hangs][Lies], int x, int y)        //ͳ����Χ�׵���������Ҫ�õ�11*11�����飬��Ϊ�����ᱻ�õ�(��Ҳ�Ǵ���11*11�������ԭ��)
{
	return arr1[x - 1][y - 1] + arr1[x - 1][y] + arr1[x - 1][y + 1]
		+ arr1[x][y - 1] + arr1[x][y + 1] + arr1[x + 1][y - 1]
		+ arr1[x + 1][y] + arr1[x + 1][y + 1] - 8 * '0';
}