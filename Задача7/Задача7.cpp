﻿#include<iostream>
#include<locale.h>
void _time(int, int);
int main()
{
	setlocale(LC_ALL, "RU");
	int hour;
	int min;
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Введите сколько часов: ";
	cin >> hour;
	cout << "Введите количество минут: ";
	cin >> min;
	cout << "Время: ";
	_time(hour, min);
	cin.get();
	cin.get();
	return 0;
}
void _time(int h, int m)
{
	using std::cout;
	cout << h << ":" << m;
}