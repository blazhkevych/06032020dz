/*
Багатомірні масиви
Модуль.Домашня робота
1. Дано квадратний масив.Розмір з клавіатури вводиться.Потрібно заповнити цифрою 1 синій колір, цифрою 0 білий колір.Зробити меню для вибору варіанту завдання

а)

б)

в)

г)

д)

е)

ж)

з)

и)

к)

Код:
*/
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n, p;
	cout << "Введите размер массива: "; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	char ch;
	do
	{
		cout << "Выберите вариант задания (1-а, 2-б, 3-в, 4-г, 5-д, 6-е, 7-ж, 8-з, 9-и, 10-к): ";  cin >> p;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = 0;
				if (p == 1 && i <= j) a[i][j] = 1;
				if (p == 2 && i >= j) a[i][j] = 1;
				if (p == 3 && (i <= j && i <= n - 1 - j)) a[i][j] = 1;
				if (p == 4 && (i >= j && i >= n - 1 - j)) a[i][j] = 1;
				if (p == 5 && ((i <= j && i <= n - 1 - j) || (i >= j && i >= n - 1 - j))) a[i][j] = 1;
				if (p == 6 && ((i >= j && i <= n - 1 - j) || (i <= j && i >= n - 1 - j))) a[i][j] = 1;
				if (p == 7 && (i >= j && i <= n - 1 - j)) a[i][j] = 1;
				if (p == 8 && (i <= j && i >= n - 1 - j)) a[i][j] = 1;
				if (p == 9 && i <= n - 1 - j) a[i][j] = 1;
				if (p == 10 && i >= n - 1 - j) a[i][j] = 1;
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
		cout << "Продолжить? (Y - Yes) ";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
	for (int i = 0; i < n; i++)
		delete[]a[i];
	delete[]a;
	system("pause");
	return 0;
}