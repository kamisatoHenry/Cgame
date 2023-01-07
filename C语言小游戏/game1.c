//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game1.h"
////二维数组初始化函数
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
////打印二维数组以及表格的函数
//void printarr(char arr[Hang][Lie], int hang, int lie)    //二维数组先不要用指针传递，没这个能力！直接数组传递就行！
//{
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie; j++)
//		{
//			printf(" %c ", arr[i][j]);
//			if (j < lie - 1)
//				printf("|");              //使其只打印两列  |
//			else
//				printf("\n");
//		}
//		for(int j = 0; j < lie; j++)
//		{
//			if (i < lie - 1)              //使其只打印两行 ---
//			{
//				printf("---");
//				if (j < hang - 1)
//					printf("|");          //使其只打印两列  |
//				else
//					printf("\n");
//			}
//		}
//	}
//}
////玩家走
//void play1(char arr[Hang][Lie], int hang, int lie)
//{
//	while (1)
//	{
//		int x = 0;
//		int y = 0;
//		scanf("%d %d", &x, &y);
//		if (arr[x][y] != ' ')
//		{
//			printf("重复输入，请重试！\n");
//			continue;
//		}
//		arr[x][y] = '*';
//		printarr(arr, Hang, Lie);
//		break;
//	}
//}
////电脑走
//void play2(char arr[Hang][Lie], int hang, int lie)
//{
//	//生成随机数
//	while (1)
//	{
//		srand((unsigned int)time(NULL));
//		int x = rand() % Hang;
//		int y = rand() % Lie;
//		if (arr[x][y] != ' ')
//		{
//			//printf("请稍等，系统正在寻找合适下棋位置……\n");
//			continue;
//		}
//		arr[x][y] = '#';
//		//printf("%d\n", ret);
//		printarr(arr, Hang, Lie);
//		break;
//	}	
//}
////判断是否分出胜负
//char is_done(char arr[Hang][Lie], int hang, int lie)
//{
//	//行
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie - 1; j++)
//		{
//			if (arr[i][j] != arr[i][j + 1])
//				break;                                 //退出内层循环，保证没有机会输出玩家胜利
//			if (arr[i][j] == '*' && j == lie - 2)      //运行到循环的最后一次才有机会返回值
//			{
//				return arr[i][j];
//			}
//		}
//	}
//	//列
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
//	//二斜线
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][i] != arr[i + 1][i + 1])                      //斜线1
//			break;
//		if (arr[i][i] == '*'  && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][hang - 1 - i] != arr[i + 1][hang - 2 - i])    //斜线2
//			break;
//		if (arr[i][hang - 1 - i] == '*' && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	//电脑同理
//	//行
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
//	//列
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
//	//二斜线
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][i] != arr[i + 1][i + 1])                      //斜线1
//			break;
//		if (arr[i][i] == '*' && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	for (int i = 0; i < hang - 1; i++)
//	{
//		if (arr[i][hang - 1 - i] != arr[i + 1][hang - 2 - i])    //斜线2
//			break;
//		if (arr[i][hang - 1 - i] == '*' && i == hang - 2)
//		{
//			return '*';
//		}
//	}
//	//游戏继续情况
//	for (int i = 0; i < hang; i++)
//	{
//		for (int j = 0; j < lie; j++)
//		{
//			if (arr[i][j] == ' ')
//				return 'c';
//		}
//	}
//	//平局情况
//	return 'e';
//}