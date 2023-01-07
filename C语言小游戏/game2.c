#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"
//二维数组初始化函数
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
void printarr(char arr[Hangs][Lies], int hang, int lie)      //只对中间9*9的区域进行操作打印 ，行列号自己额外加
{
	int i = 0;
	int j = 0;
	printf("----------------扫雷游戏-------------------\n");
	for (i = 0; i <= lie; i++)
	{
		printf("%d ", i);        //打印列号,全放在第一行
	}
	printf("\n");
	for (i = 1; i <= hang; i++)
	{
		printf("%d ", i);        ///打印行号,全放在第一列
		for (j = 1; j <= lie; j++)
		{
			printf("%c ", arr[i][j]);     //打印第i行,刚好第一行看作列号不管，和arr[0]抵消掉了
		}
		printf("\n");                    //每打印完一行后记得换行
	}
	printf("----------------扫雷游戏-------------------\n");
}
void Setmine(char arr1[Hangs][Lies], int hang, int lie)
{
	//布置10个雷
	int count = 10;
	while (count)
	{
		//生成随机的下标
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (arr1[x][y] == '0')      //如果该随机位置没有放过雷
		{
			arr1[x][y] = '1';      //那就给它放一个雷
			count--;                //成功放雷后才会--，否则直接回到循环首端继续循环(这步秒啊！使代码简洁！)
		}
	}
}
void Findmine(char arr1[Hangs][Lies], char arr2[Hangs][Lies], int hang, int lie)
{
	//1.输入排查的坐标
	//2.检查坐标处是不是雷
	    //(1)是雷   --   很遗憾炸死了  --  游戏结束
	    //(2)不是雷  --  统计坐标周围有几个雷  -- 存储排查雷的信息到show数组，游戏继续
	int x = 0, y = 0, win = 0;
	while (win <hang*lie - EASY_COUNT)
	{
		printf("请输入要排查的坐标：\n");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= hang && y >= 1 && y <= lie)
		{
			if (arr1[x][y] == '1')
			{
				printf("m裂了！\n");
				printarr(arr1, Hang, Lie);
				break;
			}
			else
			{
				//不是雷的话，统计x,y坐标周围有几个雷
				int count = get_lei(arr1,x,y);
				arr2[x][y] = count + '0';     //ASCII值转化为字符，赋值给字符数组，'0'用得妙！
				//显示排查出雷的信息
				printarr(arr2, Hang, Lie);
				win++;
			}
		}
		else
			printf("坐标不合法，请重新输入！\n");
	}
	if (win == hang * lie - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");      //排雷失败会提前跳出while循环，玩家在此时已知自己失败了，程序不会执行该if语句
		printarr(arr2, Hang, Lie);
	}
}
static int get_lei(char arr1[Hangs][Lies], int x, int y)        //统计周围雷的数量，需要用到11*11的数组，因为最外层会被用到(这也是创建11*11的数组的原因)
{
	return arr1[x - 1][y - 1] + arr1[x - 1][y] + arr1[x - 1][y + 1]
		+ arr1[x][y - 1] + arr1[x][y + 1] + arr1[x + 1][y - 1]
		+ arr1[x + 1][y] + arr1[x + 1][y + 1] - 8 * '0';
}