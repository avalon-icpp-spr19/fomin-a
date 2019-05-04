#include <iostream>
#include "Extention.hpp"

using namespace std;
using namespace ext;

struct Data
{
	int day, month;
};

int Vvod_S_Proverkoi()
{
	int n;
	bool ch = false;
	while (ch == false)
	{
		cout << "Введите количество симуляций в диапазоне от1 до 100000: " << endl;
		cin >> n;
		if (n >= 1 && n <= 100000)
		{
			ch = true;
		}
		else
		{
			cout << "Вы ошиблись. Попробуйте ещё раз." << endl;
		}
	}
	return n;
}

int N_d(int m)
{
	int num_d;
	switch (m)
	{
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:num_d = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:num_d = 30;
			break;
		case 2:num_d = 29;
			break;
	}
	return num_d;
}

int main()
{
	bool pr;
    float  k=0;
	long double ans;
	Data mas[23];
	setlocale(0, "");
	float n;
	n = Vvod_S_Proverkoi();
	for (int j = 0; j < n; j++)
	{
	for (int i = 0; i <23; i++)
	{
		mas[i].month = GetRandomValue(1, 12);
		mas[i].day = GetRandomValue(1,N_d(mas[i].month));
	}
	for (int d = 0;d < 23; d++)
	{
		for (int q = d + 1; q < 23; q++)
		{
			if (mas[d].month == mas[q].month && mas[d].day ==mas[q].day)
			{
				pr = true;
			}
		}		
	}
	if (pr) 
	{
		k += 1;	
	}
	pr = false;
}
	ans = (k /n)*100 ;
	std::cout << "Всего симуляций проведено: " << n << endl;
	std::cout << "Хотя бы 2 дня рождения совпали в " << k << " симуляциях. Процент успешных " << ans << "%" << endl;
}
