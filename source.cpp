#include <iostream>
using namespace std;
const int days = 365;
	const int week = 7;
int main()	
{
	/* ���������� ����������.
	* �������� ��������� ����������:
	* 1. ������������� ���������� "�";
	* 2. ����������� ������������� ���������� "b";
	* 3. ������������� ���������� "c", �������� � ��� ���� ������, ��� ��������
	* ���� "int";
	* 4. ������������� ���������� "d", �������� ���� ����;
	* 5. ������������ ���������� "e", �������� 4 �����;
	*/
	int a;
	unsigned int b;
	int c = sizeof(a) / 2;
	char d;
	float e;

	/* ������������� ����������.
	* ��������� ������������� ���������� ��������� �������:
	* 1. ��� ���� �������� ���������� "a" ������ ���������� � �������� 0;
	* 2. ��� ���� �������� ���������� "b" ������ ���������� � �������� 1;
	* 3. ���������� "c" ������ ��������� ������ ���� "long long";
	* 4. ���������� "d" ������� ��������� ����������� ��������� �������� ������
	* ����;
	*/
	a = 0;
	b = 0xffffffff;
	c = sizeof(long long int);
	d = std::numeric_limits<char>::max();
	/* ������������� ���������� � ������� ���������
	* ��������� ���������� � ������������� ���������� ��������� �������
	* 1. �������� ������������� ���������� � ������������������� �� ���������� ���������;
	* 2. �������� ����������� ������������� ����������, �������� � ��� ���� ������, ��� int � ������������������� �� ����������������� ���������
	* 3. �������� ����������� ������������� ����������, �������� � ��� ���� ������, ��� int � ������������������� �� ������������ ���������� ���������
	* 4. �������� ������������� ����������, �������� � ���� ���� � ������������������� �� �������� ���������
	* 5. �������� ���������� ���� char � ������������������� �� �������� 'f'
	* 6. �������� ����������� ���������� ������ ���� � ������������������� �� ���������� ���������
	* 7. �������� ����������� ������������� ����������, �������� � ��� ���� ������, ��� int � ������������������� �� ���������� ���������
	*/
	int g = 10;
	const short t = 0xA;
	const double ab = 010;
	char bc = 10;
	char we = 102;
	unsigned int ee = 11;
	const double sd = 0xA;
		/*
		*	����� ��� ���������� ��� �� ���������� ��� �������� ��������� ����������?
		*		��� �������
		*		������� ������ ������� �����
		*		���������� ����� � ���������
		*		������� ������� ��������� ������� �� ������
		*
		*	�������� ���������� ������������� ����� ���������� ��� �������� ���� ����������
		*/
	short age;
	short s;
	long long stars;
	short osadki_jan;
		/*
		*	�������� ���������� ��������� ��� ����� pi, ������� 3.14159
		*	�������� ���������� ���� float � ��������������� ��, ��������� ��������� pi.
		*	�������� ���������� ���������, ������� �������� �������� ���� � ����
		*	�������� ���������� ���������, ������� �������� �������� ���� � ������
		*	��� ���������� ��������� ���������� ����� ������ � ����.
		*	�������� ���������� ����������� ���� � ������������������ �� � ������� ����� ����������� ��������
		*/
	float p;
	int fw = days / week;
}