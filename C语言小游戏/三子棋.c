//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game1.h"                        //����ͷ�ļ��������곣����������game.h���棡
//void menu()
//{
//	printf("  ---------������----------  \n");
//	printf("*****************************\n");
//	printf("******  �Ҳ�����solo?   *****\n");
//	printf("*********   1.play   ********\n");
//	printf("*********   0.exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//game�����������������Ƕ�׵���
//	//������ά����
//	char arr[Hang][Lie];
//	startarr(arr, Hang, Lie);      //��ʼ����ά����
//	printarr(arr, Hang, Lie);      //��ӡ��ά����
//	char ret;
//	while (1)                      //��������Ҫѭ��
//	{
//		printf("���������\n");
//		play1(arr, Hang, Lie);         //�������
//		ret = is_done(arr, Hang, Lie);          //�ж���Ϸ����
//		if (ret == '*')
//		{
//			printf("���ʤ����\n");
//			break;
//		}
//		if (ret == 'e')
//		{
//			printf("ƽ�֣�\n");
//			break;
//		}
//		if (ret == 'c')
//		{
//			printf("��Ϸ����...\n");
//		}
//		printf("�ֵ���������\n");
//		play2(arr, Hang, Lie);                   //�ֵ�������
//		ret = is_done(arr, Hang, Lie);      //�ж���Ϸ����
//		if (ret == '#')
//		{
//			printf("����ʤ����\n");
//			break;
//		}
//		if (ret == 'e')
//		{
//			printf("ƽ�֣�\n");
//			break;
//		}
//		if (ret == 'c')
//		{
//			printf("��Ϸ����...\n");               //û����break������������ѭ�����ֵ������
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	do
//	{
//		menu();
//		scanf("%d", &a);
//		if (a == 1)
//		{
//			printf("ȫ��������\n");
//			game();
//		}
//		else if (a == 0)
//			printf("�˳���Ϸ\n");
//		else
//			printf("������������ԣ�\n");
//	} while (a);
//    return 0;
//}
