﻿// лаба5задание4вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, n, m;  //объявление переменных
	cout << "Введите a";
	cin >> a;  //присваивание переменной значения
	n = a % 10;
	m = a / 10;
	a = n * 10 + m;
	cout << "a=" << a;  //вывод полученного значения на экран
	return 0;
}
