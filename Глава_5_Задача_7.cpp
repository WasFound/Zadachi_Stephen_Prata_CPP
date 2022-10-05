/* Разработайте структуру по имени car, которая будет хранить следующую информацию
об автомобиле: название производителя в виде строки в символьном массиве или в 
объекте string , а также год выпуска автомобиля в виде целого числа. Напишите
программу, которая запросит пользователя, сколько автомобилей необходимо включить
в каталог. Затем программа должна применить new для создания динамического массива
структур car указанного пользователем размера. Далее она должна пригласить
пользователя ввести название производителя и год выпуска для наполнения данными
каждой структуры в массиве (см. главу 4). И, наконец, она должна отобразить
содержимое каждой структуры. Пример запуска программы должен выглядеть подобно
следующему:
Сколько автомобилей поместить в каталог?  2
Автомобиль #1:
Введите производителя:  Hudson Hornet
Укажите год выпуска:  1952
Автомобиль #2:
Введите производителя:  Kaiser
Укажите год выпуска:  1951
Вот ваша коллекция:
1952 Hudson Hornet
1951 Kaiser
*/
#include<iostream>
#include<string>
using namespace std;
int i_how_many(0);

int main()
{
	struct car
	{
		string s_manufacturer;
		int i_year_of_manufacturing;
	};
	cout << "Enter how many cars to add to the catalog: ";
	cin >> i_how_many;
	
	car* pcar = new car[i_how_many];
	for (int i = 0; i < i_how_many; i++)
	{
		cout << "Car #" << i + 1 << ": ";
		cout << "Enter manufacturer: ";
		cin >> pcar[i].s_manufacturer;
		cout << "Enter year of manufacturing: ";
		cin >> pcar[i].i_year_of_manufacturing;
	}
	cout << "\nYour vehicle configuration:\n";
	for (int i = 0; i < i_how_many; i++)
	{
		cout << pcar[i].i_year_of_manufacturing << " " << pcar[i].s_manufacturer << endl;
	}
		delete [] pcar;
	return 0;
}
