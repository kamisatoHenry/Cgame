#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"                        //其他头文件，包括宏常量都包含在game.h里面！
void menu()
{
	printf("------------扫雷-------------\n");
	printf("*****************************\n");
	printf("******  敢不敢来solo?   *****\n");
	printf("*********   1.play   ********\n");
	printf("*********   0.exit   ********\n");
	printf("*****************************\n");
}
void game()
{
	//game函数里包含大量函数嵌套调用
	//创建二维数组
	char arr1[Hang][Lie] = { 0 };
	char arr2[Hang][Lie] = { 0 };
	//初始化二维数组
	startarr(arr1, Hangs, Lies,'0');      //存放布置好的雷的信息
	startarr(arr2, Hangs, Lies,'*');      //存放排查出的雷的信息
	
	//打印二维数组
	//printarr(arr1, Hang, Lie);          //打印隐藏二维数组(调试时候用，真正的游戏肯定要隐藏雷的信息，不打印，除非你被炸死了，就打印给你看看，别让你死不瞑目！)
	printarr(arr2, Hang, Lie);            //打印显示二维数组
	
	//准备工作完成，接下来是游戏时间
	
	//布置雷
	Setmine(arr1, Hang, Lie);
	//printarr(arr1, Hang, Lie);
	
	//排查雷
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
			printf("全军出击！\n");
			game();
		}
		else if (a == 0)
			printf("退出游戏\n");
		else
			printf("输入错误，请重试！\n");
	} while (a);
	return 0;
}