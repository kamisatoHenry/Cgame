//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game1.h"
////��ά�����ʼ������
//void startarr(char arr[Hang][Lie], int hang, int lie)
//{
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie; j++)
//		{
//			arr[i][j] =' ';
//		}
//	}
//}
////��ӡ��ά�����Լ����ĺ���
//void printarr(char arr[Hang][Lie], int hang, int lie)    //��ά�����Ȳ�Ҫ��ָ�봫�ݣ�û���������ֱ�����鴫�ݾ��У�
//{
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie; j++)
//		{
//			printf(" %c ", arr[i][j]);
//			if (j < lie - 1)
//				printf("|");              //ʹ��ֻ��ӡ����  |
//			else
//				printf("\n");
//		}
//		for(int j = 0; j < lie; j++)
//		{
//			if (i < lie - 1)              //ʹ��ֻ��ӡ���� ---
//			{
//				printf("---");
//				if (j < hang - 1)
//					printf("|");          //ʹ��ֻ��ӡ����  |
//				else
//					printf("\n");
//			}
//		}
//	}
//}
////�����
//void play1(char arr[Hang][Lie], int hang, int lie)
//{
//	while (1)
//	{
//		int x = 0;
//		int y = 0;
//		scanf("%d %d", &x, &y);
//		if (arr[x][y] != ' ')
//		{
//			printf("�ظ����룬�����ԣ�\n");
//			continue;
//		}
//		arr[x][y] = '*';
//		printarr(arr, Hang, Lie);
//		break;
//	}
//}
////������
//void play2(char arr[Hang][Lie], int hang, int lie)
//{
//	//���������
//	while (1)
//	{
//		srand((unsigned int)time(NULL));
//		int x = rand() % Hang;
//		int y = rand() % Lie;
//		if (arr[x][y] != ' ')
//		{
//			//printf("���Եȣ�ϵͳ����Ѱ�Һ�������λ�á���\n");
//			continue;
//		}
//		arr[x][y] = '#';
//		//printf("%d\n", ret);
//		printarr(arr, Hang, Lie);
//		break;
//	}	
//}
////�ж��Ƿ�ֳ�ʤ��
//char is_done(char arr[Hang][Lie], int hang, int lie)
//{
//	//��
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie - 1; j++)
//		{
//			if (arr[i][j] != arr[i][j + 1])
//				break;                                 //�˳��ڲ�ѭ������֤û�л���������ʤ��
//			if (arr[i][j] == '*' && j == lie - 2)      //���е�ѭ�������һ�β��л��᷵��ֵ
//			{
//				return arr[i][j];
//			}
//		}
//	}
//	//��
//	for (int j = 0; j < lie; j++)
//	{
//		for (int i = 0; i < hang - 1; i++)
//		{
//			if (arr[i][j] != arr[i + 1][j])
//				break;
//			if (arr[i][j] == '*' && i == hang - 2)
//			{
//				return arr[i][j];
//			}
//		}
//	}
//	//��б��
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][i] != arr[i + 1][i + 1])                      //б��1
//			break;
//		if (arr[i][i] == '*'  && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][hang - 1 - i] != arr[i + 1][hang - 2 - i])    //б��2
//			break;
//		if (arr[i][hang - 1 - i] == '*' && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	//����ͬ��
//	//��
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie-1; j++)
//		{
//			if (arr[i][j] != arr[i][j + 1])
//				break;
//			if (arr[i][j] == '#' && j == lie - 2)
//			{
//				return arr[i][j];
//			}
//		}
//	}
//	//��
//	for (int j = 0; j < lie; j++)
//	{
//		for (int i = 0; i < hang - 1; i++)
//		{
//			if (arr[i][j] != arr[i + 1][j])
//				break;
//			if (arr[i][j] == '#' && i == hang - 2)
//			{
//				return arr[i][j];
//			}
//		}
//	}
//	//��б��
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][i] != arr[i + 1][i + 1])                      //б��1
//			break;
//		if (arr[i][i] == '*' && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][hang - 1 - i] != arr[i + 1][hang - 2 - i])    //б��2
//			break;
//		if (arr[i][hang - 1 - i] == '*' && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	//��Ϸ�������
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie; j++)
//		{
//			if (arr[i][j] == ' ')
//				return 'c';
//		}
//	}
//	//ƽ�����
//	return 'e';
//}