#include <iostream>;

using namespace std;


int main()
{
	/*
	Задание 1
	Программа получает на вход последовательность целых неотрицательных чисел,
	каждое число отделено пробелом. Последовательность завершается числом 0,
	при считывании которого программа должна закончить свою работу.
	Выведите наименьший и наибольший элемент данной последовательности
	Тестовые данные       Ожидаемый результат
	1 2 -3 4 -5 0					-5 4
	1 9 -3 -3 2 1	0				-3 9
	1 2 5 4 3 5 4 5 0       		 1 5
	*/
	int n = 0;
	int max = 0;
	int min = 0;
	cin >> n;
	while (n != 0)
	{
		cin >> n;
		if (min > n && n != 0)
		{
			min = n;
		}
		if (n > max && n != 0)
		{
			max = n;
		}
	}

	cout << "min- " << min << endl;
	cout << "max- " << max << endl;
	/*
	Задание 2
	Программа получает на вход последовательность целых неотрицательных чисел,
	каждое число отделено пробелом. Последовательность завершается числом 0,
	при считывании которого программа должна закончить свою работу.
	Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
	Формат входных данных
	Вводится последовательность натуральных чисел, оканчивающаяся числом 0
	(само число 0 в последовательность не входит, а служит как признак ее окончания).
	Тестовые данные				Ожидаемый результат
	1 2 3 4 5 0					  1
	1 2 3 3 2 1	0				  2
	1 2 5 4 3 5 4 5 0			3
	*/
	n = 2;
	max = 0;
	int i = 0;
	while (n != 0)
	{
		cin >> n;
		if (max < n)
		{
			max = n;
		}
		if (max = n)
		{
			++i;
		}
	}
	cout << i << endl;

	/*	Задание 3
	Дано целое неотрицательное число N.
	Найти число, составленное теми же десятичными цифрами, что и N, но в обратном порядке.
	Тестовые данные				Ожидаемый результат
	1234						      4321
	5555						      5555
	15							      51
	987654321					    123456789
	*/

	cin >> n;
	while (n > 0)
	{
		cout << n % 10;
		n = n / 10;
	}
	cout << endl;
	/* Задание 4
	Найдите минимальную степень двойки, превосходящую заданное число.
	Тестовые данные				Ожидаемый результат
	1							        2
	2							        4
	15							      16
	100							      128
	*/
	i= 1;
	cin >> n;
	while (i < n)
	{
		i *= 2;
	}
	cout << i << endl;
}
