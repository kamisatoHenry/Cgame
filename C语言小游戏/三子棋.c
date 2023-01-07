//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game1.h"                        //其他头文件，包括宏常量都包含在game.h里面！
//void menu()
//{
//	printf("  ---------三字棋----------  \n");
//	printf("*****************************\n");
//	printf("******  敢不敢来solo?   *****\n");
//	printf("*********   1.play   ********\n");
//	printf("*********   0.exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//game函数里包含大量函数嵌套调用
//	//创建二维数组
//	char arr[Hang][Lie];
//	startarr(arr, Hang, Lie);      //初始化二维数组
//	printarr(arr, Hang, Lie);      //打印二维数组
//	char ret;
//	while (1)                      //轮流下棋要循环
//	{
//		printf("玩家请下棋\n");
//		play1(arr, Hang, Lie);         //玩家先玩
//		ret = is_done(arr, Hang, Lie);          //判断游戏进程
//		if (ret == '*')
//		{
//			printf("玩家胜利！\n");
//			break;
//		}
//		if (ret == 'e')
//		{
//			printf("平局！\n");
//			break;
//		}
//		if (ret == 'c')
//		{
//			printf("游戏继续...\n");
//		}
//		printf("轮到电脑下棋\n");
//		play2(arr, Hang, Lie);                   //轮到电脑玩
//		ret = is_done(arr, Hang, Lie);      //判断游戏进程
//		if (ret == '#')
//		{
//			printf("电脑胜利！\n");
//			break;
//		}
//		if (ret == 'e')
//		{
//			printf("平局！\n");
//			break;
//		}
//		if (ret == 'c')
//		{
//			printf("游戏继续...\n");               //没主动break跳出，则会继续循环，轮到玩家玩
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
//			printf("全军出击！\n");
//			game();
//		}
//		else if (a == 0)
//			printf("退出游戏\n");
//		else
//			printf("输入错误，请重试！\n");
//	} while (a);
//    return 0;
//}
