// лаба5задание1вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int k, b;
	cout << "Введите b";
	cin >> b;
	k = b / 1024;
	cout << "k=" << k ;
	return 0;
}
