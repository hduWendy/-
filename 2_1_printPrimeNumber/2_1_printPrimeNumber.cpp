// 2_1_printPrimeNumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
//#include "math.h"
#include "iostream"
using namespace std;


char isPrimeNumber(int test_num) //素数返回1，非素数返回0
{
	if (test_num % 2 == 0) return 0;  //如果能整除2，则不为素数，返回0
	for (int i = 3; i <= sqrt(test_num); i += 2) //不能整除2则排除2的倍数，步进为2
	{
		if (test_num % i == 0) return 0; //如果能整除i，则不为素数，返回0
	}
	return 1; //全部不能整除，则为素数，返回1
}

int main()
{
	int total_num = 100; //查找多少以内的素数
	int cout_num = 0; //记录素数总数
	cout << "the prime numbers from 0 to " << total_num << ":" << endl;
	if (total_num >= 2) //判断是否包含素数2
	{
		cout << 2 << endl;
		cout_num++;
	}
	for (int test_num = 3; test_num <= total_num; test_num += 2) //除了2以外的偶数都不是素数，步进为2
	{
		if (isPrimeNumber(test_num) == 1) //判断素数函数
		{
			cout << test_num << endl;
			cout_num++;
		}
	}
	cout << "A total of " << cout_num << endl; //输出素数总数
	system("pause");
	return 0;
}

