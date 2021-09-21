
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, rez;
	cout << "Введите трехзначное число: ";
	cin >> rez;
	if (rez % 2 == 0)
	{
		cout << "Число " << rez << " четное" << endl;
	}
	else
	{
		cout << "Число " << rez << " нечетное" << endl;
	}
	a = rez % 10;
	b = rez / 10 % 10;
	c = rez / 100;
	cout <<"Среднее арифметическое составляющих числа равно " << (a + b + c) / 3  << endl;



	int month;
	cout << "Введите номер месяца: ";
	cin >> month;
	switch (month)
	{
	case 1,2,12:
		cout << "Зима" << endl;
		break;
	case 3,5:
		cout << "Весна|" << endl;
		break;
	case 6,7,8:
		cout << "Лето" << endl;
		break;
	case 9,10,11:
		cout << "Осень" << endl;
		break;
	default:
		cout << month << " месяца не существует" << endl;
	}


	system("pause");
	return 0;
}
