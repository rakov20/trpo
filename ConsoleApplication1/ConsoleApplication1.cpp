
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
	case 1:
		cout << "Январь, Зима" << endl;
		break;
	case 2:
		cout << "Февраль, Зима" << endl;
		break;
	case 3:
		cout << "Март, Весна" << endl;
		break;
	case 4:
		cout << "Апрель, Весна" << endl;
		break;
	case 5:
		cout << "Май, Весна" << endl;
		break;
	case 6:
		cout << "Июнь, Лето" << endl;
		break;
	case 7:
		cout << "Июль, Лето" << endl;
		break;
	case 8:
		cout << "Август, Лето" << endl;
		break;
	case 9:
		cout << "Сентябрь, Осень" << endl;
		break;
	case 10:
		cout << "Октябрь, Осень" << endl;
		break;
	case 11:
		cout << "Ноябрь, Осень" << endl;
		break;
	case 12:
		cout << "Декабрь, Зима" << endl;
		break;
	default:
		cout << month << " месяца не существует" << endl;
	}


	system("pause");
	return 0;
}
