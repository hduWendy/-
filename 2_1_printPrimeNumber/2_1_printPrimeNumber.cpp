// 2_1_printPrimeNumber.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"
//#include "math.h"
#include "iostream"
using namespace std;


char isPrimeNumber(int test_num) //��������1������������0
{
	if (test_num % 2 == 0) return 0;  //���������2����Ϊ����������0
	for (int i = 3; i <= sqrt(test_num); i += 2) //��������2���ų�2�ı���������Ϊ2
	{
		if (test_num % i == 0) return 0; //���������i����Ϊ����������0
	}
	return 1; //ȫ��������������Ϊ����������1
}

int main()
{
	int total_num = 100; //���Ҷ������ڵ�����
	int cout_num = 0; //��¼��������
	cout << "the prime numbers from 0 to " << total_num << ":" << endl;
	if (total_num >= 2) //�ж��Ƿ��������2
	{
		cout << 2 << endl;
		cout_num++;
	}
	for (int test_num = 3; test_num <= total_num; test_num += 2) //����2�����ż������������������Ϊ2
	{
		if (isPrimeNumber(test_num) == 1) //�ж���������
		{
			cout << test_num << endl;
			cout_num++;
		}
	}
	cout << "A total of " << cout_num << endl; //�����������
	system("pause");
	return 0;
}

