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
//int main()
//{
//	int var[3] = { 10,100,1000 };
//	for (int i = 0; i < 3; i++)
//	{
//		*var = i;
//		//var++;不能将var作为左值
//		//一个数组名对应一个指针常量
//		*(var + 2) = 300;
//	}
//	cout << var[2] << endl;
//	return 0;
//}

//指针数组
const int max = 3;
//int main() {
//	int var[max] = { 10,20,30 };
//	int *ptr[max];
//	for (int i = 0; i < max; i++) {
//		ptr[i] = &var[i];
//
//	}
//	for (int i = 0; i < max; i++) {
//		cout << *ptr[i] << endl;
//		cout << ptr[i] << endl;
//	}
//	return 0;
//}
const int MAX = 4;
////argc: 整数,用来统计你运行程序时送给main函数的命令行参数的个数
//
////*argv[]: 字符串数组，用来存放指向你的字符串参数的指针数组，每一个元素指向一个参数
////
////argv[0] 指向程序运行的全路径名
////
////argv[1] 指向在DOS命令行中执行程序名后的第一个字符串
////
//argv[2] 指向执行程序名后的第二个字符串
//int main(int argc, const char * argv[]) {
//
//	const char *names[MAX] = {
//		"Zara Ali",
//		"Hina Ali",
//		"Nuha Ali",
//		"Sara Ali",
//	};
//
//	for (int i = 0; i < MAX; i++) {
//		cout << " --- names[i]              = " << names[i] << endl;
//		cout << " --- *names[i]             = " << *names[i] << endl;
//		cout << endl;
//		cout << " --- (*names[i] + 1)       = " << (*names[i] + 1) << endl;
//		cout << " --- (char)(*names[i] + 1) = " << (char)(*names[i] + 1) << endl;
//		cout << " ------------------------------------ " << endl << endl << endl << endl;
//	}
//	return 0;
//}

//多级指针
//int main()
//{
//	int var;
//	int *ptr;
//	int **pptr;
//	var = 3000;
//	// 获取 var 的地址
//	ptr = &var;
//	// 使用运算符 & 获取 ptr 的地址
//	pptr = &ptr;
//	// 使用 pptr 获取值
//	cout << "Value of var :" << var << endl;
//	cout << "Value available at *ptr :" << *ptr << endl;
//	cout << "Value available at **pptr :" << **pptr << endl;
//	return 0;
//}

//将指针传递给函数
//#include <ctime>
//void gets(unsigned long *par);
//int main() {
//	unsigned long sec;
//	gets(&sec);//给指针赋值
//	cout << sec << endl;
//	return 0;
//}
//void gets(unsigned long *par) {
//	*par = time(NULL);
//	return;
//}

////将数组作为函数的参数
////double getAverage(int arr[5], int size);
//double getAverage(int *arr, int size);
//
//int main()
//{
//	// 带有 5 个元素的整型数组
//	int balance[5] = { 1000, 2, 3, 17, 50 };
//	double avg;
//	// 传递一个指向数组的指针作为参数
//	avg = getAverage(balance, 5);
//	// 输出返回值
//	cout << "Average value is: " << avg << endl;
//	return 0;
//}
//double getAverage(int *arr, int size)
//{
//	int i, sum = 0;
//	double avg;
//	for (i = 0; i < size; ++i)
//	{
//		sum += arr[i];
//	}
//	avg = double(sum) / size;
//	return avg;
//}

////从函数返回指针
//#include <ctime>
//using namespace std;
//// 要生成和返回随机数的函数
//int * getRandom()
//{
//	static int r[10];//定义局部变量为STATIC变量
//	// 设置种子
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; ++i)
//	{
//		r[i] = rand();
//		cout << r[i] << endl;
//	}
//	return r;
//}
//// 要调用上面定义函数的主函数
//int main()
//{
//	// 一个指向整数的指针
//	int *p;
//	p = getRandom();
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "*(p + " << i << ") : ";
//		cout << *(p + i) << endl;
//	}
//	return 0;
//}

////将引用作为参数
//void swap(int& x, int& y);
//int main() {
//	int a = 10; int b = 20;
//	swap(a, b);
//	cout << a << " " << b << endl;
//
//}
//void swap(int& x, int& y) {
//	x = x + y;
//	y = x + y;
//	return;
//}

//返回引用
double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };
double& setValues(int i)
{
	return vals[i]; // 返回第 i 个元素的引用
}
// 要调用上面定义函数的主函数
int main()
{
	cout << "改变前的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
	setValues(1) = 20.23; // 改变第 2 个元素
	setValues(3) = 70.8; // 改变第 4 个元素
	cout << "改变后的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
	return 0;
}