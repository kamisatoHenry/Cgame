//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>                      //�����ͷ�ļ�
//#include <time.h>                        //����python�е�time��
//void menu()
//{
//	printf("*****************************\n");
//	printf("*********   1.play   ********\n");
//	printf("*********   2.exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//��������Ϸ��ʵ��
//	//1.���������
//	int ret = rand()%100+1;             //�����0-32767������0-99��+1��Χ���1-100
//	//printf("%d\n", ret);
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�����ˣ�\n");
//			printf("----------------------------------------\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));     //srand�������������㣬time����ʹ����������������������д'��',
//	                                     //srand�����Ĳ���������Ϊunsigned int������time_t����(��������)ҪǿתΪunsigned int
//	                                     //д���������棬����rand()֮ǰ������ȷ�����ֻ����һ�Σ����ܱ�֤rand()�ܵ����������
//	                                     //srand�ڲ�ʵ�ֲ�����ȫ��⣬������һ������ʱ���һֱ�仯���������
//	do
//	{
//		menu();     //��ӡ�˵�
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//			game();                       //���溯����ע�����������Ҫ�ں������棬����ÿ�β����ֶ��任�����������鿨һ������Զ�����ܲ¶�
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}