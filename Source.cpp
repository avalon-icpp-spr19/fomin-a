#include <iostream>
#include <string>
#include "Extentional.hpp"

using namespace std;
using namespace ext;

int main()
{
	/*
	������� �1
	int val = 10;
	�������� ����� ���������� val
	�������� ��������� ��� �������� ������ ���������� val
	��������� ����� ���������� val � ��������� ���������
	�������� �������� ���������� val, ��������� ���������
	����� ��������� ��������� ����������:
	unsigned int a = 5U;
	double b = 0.8;
	const float f = 0.5F;
	const long long ll = 123LL;
	�������� � ������������������ ��������� �� ��������������� ����������.
	����� ������ ����� ����������� ���������? ��������� � ������� ��������� sizeof
	� ������� ����������� ����������:
	��������� �������� ���������� a �� 1
	��������� ���������� b �������� 0.25
	�������� ��������� �������� ���������� f
	�������� ���������� ������� �� ������� �� 10 ���������� ll
	*/
	int val = 10;	
	cout << &val << endl;
	int *pt = &val;
	cout << pt << endl;

	unsigned int a = 5U;
	double b = 0.8;
	const float f = 0.5F;
	const long long ll = 123LL;
	
	unsigned int* pta = &a;
	double* ptb = &b;
	const float* ptf= &f;
	const long long * ptll = &ll;

	cout << sizeof(pta) << endl;
	cout << sizeof(ptb) << endl;
	cout << sizeof(ptf) << endl;
	cout << sizeof(ptll) << endl;

	*pta += 1;
	*ptb = 0.25;
	cout << *ptf * 2 << endl;
	cout<< *ptll % 10 << endl;
	/*
	������� �2
	��� ������� �� ����� ��������� ���?
	��������������� ������ ������, �������� ������������� �������� ����������.
	#include <iostream>
	using namespace std;
	int main()
	{
	int t[4] = {8,4,2,1};
	int *p1 = t + 2, *p2 = p1 - 1;
	p1++;
	cout << *p1 - t[p1 - p2] << endl;
	}
	int data[] = {1,2,3,4,5};
	�������� ��������� �� ������ ������� �������
	� ������� ����� for � ����������� ��������� �������� ������ ������� ������� � �������.
	� ������� ����� for � ����������� ��������� ��������� ������ ������� ������� � 2 ����
	� ���������� ����� ������������ ��������� �������.
	�������� ���������� ���������.
	*/
	int t[4] = {8,4,2,1}; //�������� � ������������ �������
	int *p1 = t + 2, *p2 = p1 - 1; //�������� ���� ���������� � �� ������������� p1-����� �������� �������� �������, � p2-�������
	p1++; //�������� �� �������� �������
	cout << *p1 - t[p1 - p2] << endl; // 1-t[2]= 1 - 2 = -1 - �����

	int i = 0;
	int data[] = {1,2,3,4,5};
	int *ptr = data;
	for (i = 0; i < 5; ++i)
	{
		cout << *ptr << " ";
		ptr += 1;
	}
	cout << endl;
ptr = data;
	int sum = 0;
	for (i = 0; i < 5; ++i)
	{
		*ptr *= 2;
		sum += *ptr;
		ptr += 1;
	}
	cout << sum << endl;

	/*
	������� �3
	1.	������������� ������ �� 20 ��������� ��������� �� ��������� [-100, 100].
	2.	�������� ��������� �� ������ ������� �������.
	3.	� ������� ����� for � ������������ ��������� �������� ������ � �������.
	4.	��������� �������������� ��������� ������� ������������ ������� �������.
	5.	�������� ��� ������ � ��������. (��� ������ ������� ������������ ���������� ����������).
	��� ������ ������� ������������ ���������, ��������� ���������� � ��������� ������� �� ��������.
	*/
	int mas[20];
	for (i = 0; i < 20; ++i)
	{
		mas[i] = GetRandomValue(-100, 100);
	}
	int *ykz = mas;
	for (i = 0; i < 20; ++i)
	{
		cout << *ykz << " ";
		ykz += 1;
	}
	/*
	������� �4
	����� ����� ��������� ���������� ������, ��������������������� ��������� ���������.
	�������� const char data[] = "abcdefghijklmnopqrstuvwxyz";
	������������ ������ � ���������� ���� ������.
	���������� ������� �������, �� ������� ��������� ������������� ������ ���������� ������ ���.
	���� ���������� ������� � ������ ��� ������� -1.
	�������� ������			��������� ���������
	d				4
	z				26
	!				-1
	������� �5
	�������� ���������, ������� ���������� ��� ������, ������� ������ ������������.
	��������� ����������� �����������.
	���� ��������� ������ �����, ������� 1, ���� ������ �� ����� ������� 0.
	������ ����� ���� ������ ��������. ������ ��������� ������ �� ����� ��������� 256 ��������.
	������, ��������� ������������� ����� �������� ��������� �������:
	#include <iostream>
	using namespace std;
	int main()
	{
	char line[256];
	cin.getline(line, 256);
	}
	*/
}