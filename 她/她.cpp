// 她.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
#include <cmath>
using namespace std;
//using std::setw:
//int main()
//{
//	// 一个带有 5 行 2 列的数组
//	int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };
//
//	// 输出数组中每个元素的值                      
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 2; j++)
//		{
//			cout << "a[" << i << "][" << j << "]: ";
//			cout << a[i][j] << endl;
//		}
//
//	return 0;
//}
//数组指针
//int main()
//{
//	double balance[5] = { 100.0,2.0,3.4,17.0,50.0 };
//	double *p;
//	p = balance;
//
//	cout << "使用指针的数组" << endl;
//	for (int i = 0; i <5; i++) {
//		cout << "*(p+" << i << "):";
//		cout << *(p + i) << endl;
//	}
//	cout << "使用balance的作为地址的数组值" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "*(balance + " << i << ") : ";
//		cout << *(balance + i) << endl;
//	}
//
//	return 0;
//}
#include <ctime>

using namespace std;

// 要生成和返回随机数的函数
//int * getRandom()
//{
//	static int  r[10];
//
//	// 设置种子
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; ++i)
//	{
//		r[i] = rand();
//		cout << r[i] << endl;
//	}
//
//	return r;
//}
//
//// 要调用上面定义函数的主函数
//int main()
//{
//	// 一个指向整数的指针
//	int *p;
//
//	p = getRandom();
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "*(p + " << i << ") : ";
//		cout << *(p + i) << endl;
//	}
//
//	return 0;
//}
#include <cstring>
//int main()
//{
//	char str1[10] = "Hello";
//	char str2[10] = "World";
//	char str3[10];
//	int  len;
//
//	// 复制 str1 到 str3
//	strcpy(str3, str1);
//	cout << "strcpy( str3, str1) : " << str3 << endl;
//
//	// 连接 str1 和 str2		
//	strcat(str1, str2);
//	cout << "strcat( str1, str2): " << str1 << endl;
//
//	// 连接后，str1 的总长度
//	len = strlen(str1);
//	cout << "strlen(str1) : " << len << endl;
//
//	return 0;
//}

////指针
//int main()
//{
//	int var1 = 10;
//	int *ip;
//	int *ptr = NULL;
//	ip = &var1;
//	cout << ip << endl;
//	cout << var1 << endl;
//	if(ptr)
//	{
//		cout << "空指针" << ptr;
//	}
//	
//	return 0;
//}
//
////指针和数组
////数组本身就是地址，由连续的内存位置组成
////所以指针和数组的赋值和指针与变量的赋值不一样
//const int max = 3;
//int main()
//{
//	int *p;
//	int var[max] = { 1,2,3 };
//	p = var;
//	for (int i = 0; i < max; i++) {
//		cout << p << endl;
//		cout << *p << endl;
//		p++;
//	}
//	return 0;
//}
//数组更改值
int main()
{
	int var[3] = { 10,100,1000 };
	for (int i = 0; i < 3; i++)
	{
		*var = i;
		//var++;不能将var作为左值
		//一个数组名对应一个指针常量
		*(var + 2) = 300;
	}
	cout << var[2] << endl;
	return 0;
}
