#pragma once
#include <stdio.h>
#include <stdlib.h>                      //随机数头文件
#include <time.h>                        //类似python中的time库
#define Hang 9
#define Lie 9
#define Hangs Hang+2
#define Lies Lie+2
#define EASY_COUNT 10
void startarr(char arr[Hangs][Lies], int hang, int lie, char set);        //初始化棋盘
void printarr(char arr[Hangs][Lies], int hang, int lie);        //打印棋盘
void Setmine(char arr1[Hangs][Lies], int hang, int lie);      //布置雷
void Findmine(char arr1[Hangs][Lies], char arr2[Hangs][Lies], int hang, int lie);     //排查雷
int get_lei(char arr1[Hangs][Lies], int x, int y);            //得到周围雷的个数