#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"                        //����ͷ�ļ��������곣����������game.h���棡
void menu()
{
	printf("------------ɨ��-------------\n");
	printf("*****************************\n");
	printf("******  �Ҳ�����solo?   *****\n");
	printf("*********   1.play   ********\n");
	printf("*********   0.exit   ********\n");
	printf("*****************************\n");
}
void game()
{
	//game�����������������Ƕ�׵���
	//������ά����
	char arr1[Hang][Lie] = { 0 };
	char arr2[Hang][Lie] = { 0 };
	//��ʼ����ά����
	startarr(arr1, Hangs, Lies,'0');      //��Ų��úõ��׵���Ϣ
	startarr(arr2, Hangs, Lies,'*');      //����Ų�����׵���Ϣ
	
	//��ӡ��ά����
	//printarr(arr1, Hang, Lie);          //��ӡ���ض�ά����(����ʱ���ã���������Ϸ�϶�Ҫ�����׵���Ϣ������ӡ�������㱻ը���ˣ��ʹ�ӡ���㿴���������������Ŀ��)
	printarr(arr2, Hang, Lie);            //��ӡ��ʾ��ά����
	
	//׼��������ɣ�����������Ϸʱ��
	
	//������
	Setmine(arr1, Hang, Lie);
	//printarr(arr1, Hang, Lie);
	
	//�Ų���
	Findmine(arr1, arr2, Hang, Lie);
}
int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &a);
		if (a == 1)
		{
			printf("ȫ��������\n");
			game();
		}
		else if (a == 0)
			printf("�˳���Ϸ\n");
		else
			printf("������������ԣ�\n");
	} while (a);
	return 0;
}