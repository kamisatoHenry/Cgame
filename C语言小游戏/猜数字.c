//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>                      //随机数头文件
//#include <time.h>                        //类似python中的time库
//void menu()
//{
//	printf("*****************************\n");
//	printf("*********   1.play   ********\n");
//	printf("*********   2.exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	int ret = rand()%100+1;             //随机数0-32767，余数0-99，+1范围变成1-100
//	//printf("%d\n", ret);
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜中了！\n");
//			printf("----------------------------------------\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));     //srand随机生成种子起点，time函数使得起点数随机，参数不传就写'空',
//	                                     //srand函数的参数类型需为unsigned int，所以time_t类型(类似整型)要强转为unsigned int
//	                                     //写到函数外面，但在rand()之前，既能确保起点只设置一次，又能保证rand()能调用种子起点
//	                                     //srand内部实现不用完全理解，可能设一个起点后，时间会一直变化，可以随机
//	do
//	{
//		menu();     //打印菜单
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("猜数字\n");
//			game();                       //开玩函数，注意随机数生成要在函数外面，否则每次猜数字都变换随机数，就像抽卡一样，永远不可能猜对
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}