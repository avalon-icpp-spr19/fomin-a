#include <iostream>
#include <string>
#include "Extention.hpp"

using namespace std;
using namespace ext;

int main()
{
	/* Задание 1
	 Объявите массив для хранения 10-ти целочисленных элементов
	 Объявите константный массив для хранения 20-ти вещественных элементов
	 Объявите массив для хранения 2-х символьных элементов
	 Пусть есть массив объявленный следующим образом:
	 int data[6] = { 2, 4, 8, 16, 32, 64 };
	 Какой размер имеет данный массив?
	 Данные какого типа он хранит ЦЕЛЫЕ ЧИСЛА
	 Чему равен элемент массива с индексом 0?
	 Чему равен элемент массива с индексом 3?
	 Какой индекс у элемента 8?
	 Какой индекс у элемента 32?
	 Присвойте первому элементу массива значение 1.
	 Утройте значение последнего элемента в массиве.
	 Выведите элементы массива на экран через пробел.
	 Объявите массив для хранения 5-ти элеменов любого типа и проинизиализируете его с помощью списка инициализации
	 Выведите объявленный массив на экран.
	 Можно ли не указывать размер массива при его создании? ДА
	 Если можно, то продемострируйте это.
	 Пусть массив объявили следующим образом:
	 int data[5] = { 1, 2 }
	 Каков размер данного массива?
	 Чему равен элемент с индексов 1? Чему равен элемент с индексом 2?
	 Проверьте ответы с помощью дебагера.
	 Выведите все элементы массива на экран.
	 Пусть массив объявлен следующим образом:

	 Каков размер данного массива?
	 Чему равен элемент с индексов 0? Чему равен индекс у элемента 'c'
	Допустимы ли следующие выражения:
	 alpha[0];
	 alpha[3];
	 alpha[1] = 'd'; нет, тк переменная константная
	 alpha[1] = 'b';
	 Выведите все элементы массива на экран.
	*/
	int mas1[10];
	const float mas2[20] = { 0 };
	char mas3[2];
	int data[6] = { 2, 4, 8, 16, 32, 64 };
	cout << sizeof(data) << endl;
	cout << "0- " << data[0] << " 3- " << data[3] << endl;
	cout << "mas[2]=8   mas[4]=32" << endl;
	data[0] = 1;
	data[5] *= 3;
	for (int i = 0; i < 6; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	int mas4[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 6; i++)
	{
		cout << mas4[i] << " ";
	}
	cout << endl;
	int mas5[] = {6,9};
	int data2[5] = { 1, 2 };
	cout << sizeof(data2) << endl;
	cout << "1- " << data2[1] << " 2- " << data2[2] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << data2[i] << " ";
	}
	cout << endl;
	const char alpha[3] = { 'a', 'b', 'c' };
	cout << sizeof(alpha) << endl;
	cout << "0- " << alpha[0] << " alpha[2] - " << alpha[2] << endl;
	alpha[0];
	alpha[3];
	for (int i = 0; i < 3; i++)
	{
		cout << alpha[i] << " ";
	}
	cout << endl;

	/*
	Задание 2
	 Объявите массив для хранения переменных типа int размером 20;
	 Запишите в объявленный массив первые 20 натуральных чисел в порядке возрастания
	 Выведите все элементы массива на экран
	 Запишите в этот же массив первые 20 четных чисел в порядке возрастания
	 Выведите все элементы массива на экран
	 Запишите в этот же массив первые 20 степеней двойки (2^0, 2^1, ... , 2^19). Функцию pow не использовать
	 Выведите все элементы массива на экран по 5 элементов в одной строке
	 Занулите в предыдущем массивы все элементы с нечетным индексов (i = 1, 3, ..., 19);
	 Выведите все элементы массива на экран по 5 элементов в одной строке
	*/
	int sk[20];
	for (int i = 0; i < 20; i++)
	{
		sk[i] = i + 1;
		cout << sk[i] << " ";
	}
	cout << endl;
	int k=0;
	for (int i = 0; i < 20; i++)
	{
		sk[i] = k;
		cout << sk[i] << " ";
		k += 2;
	}
	cout << endl;
	k = 1;
	for (int i = 0; i < 20; i++)
	{
		k = k*2;
	
		sk[i] = k;
		cout << sk[i] << " ";
	}
	cout << endl;
	k = 1;
	for (int i = 0; i < 20; ++i)
	{
		sk[i] = 0;
		i +=1;
		cout << sk[i] << " ";
	}
	cout << endl;
	/* Задание 3
	 При выполнении дальнейших заданий для заполнения массива случайными числами использовать функцию ext::GetRandomValue из Extention.hpp
	 Например:
	 int data[10];
	 for(int i = 0; i < 10; ++i)
	 {
	 data[i] = ext::GetRandomValue(0, 100, true);
	 }
	 После выполнения данного кода массив data будет содержать 10 чисел в диапазоне от 0 до 100.
	 Сгенерируйте массив из 10 элементов в диапазоне от -10 до 10.
	 Выведите его на экран
	 Найдите наибольший элемент в массиве.
	 Выведите на экран значение этого элемента и его индекс
	 (если максимальных элементов несколько вывести индекс любого).
	 Сгенерируйте массив из 100 элементов в диапазоне от -100 до 100.
	 Посчитайте и выведите на экран
	 Сумму всех элементов этого массива.
	 Количество элементов меньше 0, количество элементов равных 0, количество элементов больше 0

	 Сгенерируйте массив из 100 элементов в диапазоне от 1 до 100.
	 Вывести на экран
	 Элементы в записи которых встречается цифра 2
	 Элементы в записи которых не встречаются нечетные цифры
	 Сложите поэлементно массивы из двух предыдущих пунктов, записав результаты сложения в новый массив
	 Выведите на экран получившийся массив по 10 элементов в строке.
	 Сгенерируйте массив из 100 элементов в диапазоне от 1 до 100.
	 Попросите пользователя ввести число из этого же диапазона.
	 Осуществите поиск элемента в массиве.
	 Если число есть в массиве выведите его индекс, если числа нет выведите -1.
	Посчитайте и выведите на экран количество элементов больших, чем введенное пользователем число.
	*/
	int rm[10];
	int max = -10;
	int ind,mn,rn,bn;
	mn = 0;
	rn = 0;
	bn = 0;
	for (int i = 0; i < 10; ++i)
	{
		rm[i] = GetRandomValue(-10, 10, true);
		cout << rm[i] << " ";
		if (max < rm[i])
		{
			max = rm[i];
			ind = i;
		}
	}
	cout << endl;
	cout << "max - " << max << "it's index - " << ind << endl;
	int hm[100];
	int sum = 0;
	for (int i = 0; i < 100; ++i)
	{
		hm[i] = GetRandomValue(1, 100, true);
		sum += hm[i];
		if (hm[i] < 0)
		{
			mn += 1;
		}
		else if (hm[i] = 0)
		{
			rn += 1;
		}
		else if (hm[i] > 0)
		{
			bn += 1;
		}


	}
	cout << sum << endl;
	cout << "<0 - " << mn << "  =0 - " << rn << "  >0 - " << bn;
	int em[100];
	for (int i = 0; i < 100; ++i)
	{
		em[i] = GetRandomValue(1, 100, true);
		cout << em[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 100; ++i)
	{
		if (em[i] == 2 || (em[i] % 10) == 2 || (em[i] / 10) == 2)
		{
			cout << "em[" << i << "] = " << em[i] << endl;
		}
	}
	cout << endl;
	for (int i = 0; i < 100; ++i)
	{
		if (em[i]% 2==0 && (em[i] % 10)% 2==0 && (em[i] / 10) % 2 ==0  )
		{
			cout << "em[" << i << "] = " << em[i] << endl;
		}
	}
	int summas[100];
	k = 1;
	for (int i = 0; i < 100; ++i)
	{
		summas[i] = em[i] + hm[i];
		cout << summas[i] << " ";
		if (k == 10)
		{
		cout << endl;
		k = 0;
		}
		k += 1;
	}
	cout << endl;
	int ask[100];
	for (int i = 0; i < 100; ++i)
	{
		ask[i] = GetRandomValue(1, 100, true);
	}
	int n;
	cout << "Vvod: ";
	cin >> n;
	bool ch = false;
	k = 0;
	ind = 0;
	for (int i = 0; i < 100; ++i)
	{
		if (ask[i] > n)
		{
			k += 1;
		}
		if (ask[i] == n)
		{
			ch = true;
			ind = i;
			break;	
		}
	}
	if (ch)
	{
		cout << ind << endl;
	}
	else
	{ 
		cout << "-1" << endl;
	}
	cout << ">n - " << k << endl;
	/* Задание 4
	Сгенерируйте массив типа char из 100 элементов в диапазоне от a до z.
	Подсказка: функцию генерации рандомного элемента можно вызвать следующим образом:
	GetRandomValue('a','z');
	Выведите получившейся массив на экран в виде одной строки.
	Выведите на экран как часто каждая буква встречается в сгенерированном массиве.
	Выведите на экран вертикальную гистограмму рассчитанной частоты символов.
	Пример: "aabbdddz" для такой строки получится следующая гистограмма:
	|**
	|**
	|
	|***
	|
	|
	...
	|
	|
	|*
	На основании произведенных расчетов замените числовое представление на гистограмму, составленную из символов '*'
	*/
	char sym[100];
	for (int i = 0; i < 100; ++i)
	{
	sym[i] = GetRandomValue(97, 122);
	cout << sym[i];
	}
	cout << endl;
	char z;
	for (int i = 97; i < 123; ++i)
	{
		z = i;
		cout << "|";
		for (int j = 0 ; j < 100;++j)
			{
			if (z== sym[j] )
			{
			cout << "*";
			}
	}
		cout << endl;
	}
	/* Задание 5
	Пусть есть двумерный массив объявленный следующим образом:
	int data[3][2] = { {2, 4}, {8, 16}, {32, 64} };
	Чему равно количество строк в данном массиве?
	Чему равно количество элементов в каждой строке?
	Какой размер имеет данный массив?
	Данные какого типа он хранит?
	Как обратиться к элементу со значением 8?
	Как обратиться к элементу со значением 64?
	Присвойте первому элементу массива значение 1.
	Удвойте значение последнего элемента в массиве.
	Объявите двумерный массив размером 4х2 любого типа и проинизиализируете его с помощью списка инициализации
	Можно ли не указывать размер двумерного массива при его создании?
	Если можно, то продемострируйте это.
	Пусть массив объявили следующим образом:
	int data[][4] = { {1, 2}, {3,4,5} }
	Каков размер данного массива?
	Чему равен элемент data[0][0]? Чему равен элемент data[1][2]?
	Проверьте ответы с помощью дебагера.
	Увеличьте в два раза каждый элемент в данном массиве.
	Выведите все элементы массива на экран.
	Использовать циклы for
	*/
		int datas[3][2] = { {2, 4}, {8, 16}, {32, 64} };
	cout << sizeof(datas)<< endl;
	cout << datas[1][0] << endl;
	/*строк 3
	элементов в строке 2
	хранит целые числа*/
	cout << datas[2][1] << endl;
	datas[0][0] = 1;
	datas[2][1] *= 2;
	int sm[4][2] = { {1,2}, {3,4}, {5,6} ,{7,8} };
	int dt[][4] = { {1, 2}, {3,4,5} };
	cout << sizeof(dt) << endl;
	cout << dt[0][0] << " " << dt[1][2] <<endl;
	for (int i=0; i<2 ; ++i)
	{
		for (int j=0;j<4;++j)
		{
			dt[i][j] *= 2;
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << dt[i][j] << " ";
		}
		cout << endl;
	}
	/* Задание 6
	Сгенерируйте двумерный массив размером 10x10.
	Заполните его случайными значениями от 0 до 100
	Найдите и выведите на экран:
	Сгенерированный массив
	Сумму всех элементов массива
	Количество всех четных элементов.
	Максимальный и минимальный элементы массива вместе с их индексами
	*/
}
