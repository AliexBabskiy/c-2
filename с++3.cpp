#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	cout << "Выбирете действие:\n  1.Сложение\n  2.Вычитание\n  3.Частное\n  4.Произведение\n  5.Возведение в степень\n  6.Нахождения квадратного корня\n  7.Нахождение 1 процента от числа\n  8.Найти факториал числа\n  9.Выйти из программы\n";

	int a, b, chous, res;
	double result;

	cin >> chous;
	switch (chous)
	{
		case 1:
			system("cls");
			cout << "Сложение\n";
			cout << "Введите первое число:";
			cin >> a;
			cout << "Введите второе число:";
			cin >> b;
			result = a + b;
			cout << "Ответ: " << result << endl;
			main();
		case 2:
			system("cls");
			cout << "Вычитание\n";
			cout << "Введите первое число:";
			cin >> a;
			cout << "Введите второе число:";
			cin >> b;
			result = a - b;
			cout << "Ответ: " << result << endl;
			main();
		case 3:
			system("cls");
			cout << "Частное\n";
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			result = a / b;
			cout << "Ответ: " << result << endl;
			main();
		case 4:
			system("cls");
			cout << "Произведение\n";
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			result = a * b;
			cout << "Ответ: " << result << endl;
			main();
		case 5:
			system("cls");
			cout << "Возведение в степень\n";
			cout << "Введите число: ";
			cin >> a;
			res = a;
			cout << "Введите степень числа: ";
			cin >> b;
			for (int i = 2; i <= b; i++)
			{
				res = a * res;
			}
			result = res;
			cout << "Ответ: " << result << endl;
			main();
		case 6:
			system("cls");
			cout << "Нахождения квадратного корня\n";
			cout << "Введите число: ";
			cin >> a;
			result = sqrt(a);
			cout << "Ответ: " << result << endl;
			main();
		case 7:
			system("cls");
			cout << "Нахождение 1 процента от числа\n";
			cout << "Введите число: ";
			cin >> a;
			result = (a / 100);
			cout << "Ответ: " << result << endl;
			main();
		case 8:
			system("cls");
			cout << "Найти факториал числа\n";
			cout << "Введите число: ";
			cin >> a;
			b = 1;
			for (int i = 1; i <= a; i++) {
				b = b * i;
			}
			result = b;
			cout << "Ответ: " << result << endl;
			main();
		case 9:
			break;
		default:
			system("cls");
			main();
	}
}