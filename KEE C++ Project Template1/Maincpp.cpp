//Шаблон проэкта С++
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
//Задача 1 
template< typename T>
void memory(T* &ptr, int length) 
{ 
	if (length < 0)
		throw std::out_of_range("длинна массива не может быть отрицательной");//останавливает выполнение блока
	ptr = new T[length];
}
template< typename T>
void fill_arr(T arr[], const int length, int begin, int end)
{
	srand(time(NULL));
		for (int i = 0; i < length; i++)
			arr[i] = rand() % (end - begin) + begin;
}
template< typename T>
void show_arr(T arr[], const int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << "\b\n";
}
//Задача 2 
template< typename T>
void append(T*& arr, int length, T val)//value - значение
{
	T* tmp = new T[length + 1];
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;
	tmp[length] = val;
	arr = tmp; 
}
template< typename T>
T* pos_arr_concat(T arr1[], const int length1, T arr2[], const int length2, int& var)
{
	T* tmp_arr = new T[0];
	int tmp_size = 0;
	for (int i = 0; i < length1; i++)
		if (arr1[i] > 0)
		{
			append(tmp_arr, tmp_size, arr1[i]);
			tmp_size++;
		}

	for (int i = 0; i < length2; i++)
		if (arr2[i] > 0)
		{
			append(tmp_arr, tmp_size, arr2[i]);
			tmp_size++;
		}
	var = tmp_size;
	return tmp_arr;
}
//Задача 3
struct triangle
{
	double a = 0; 
	double b = 0;
	double c = 0;
};
double tr_area(triangle& T)
{
	double halfp = (T.a + T.b + T.c) / 2.0;//полупириметр 
	return sqrt(halfp * (halfp - T.a) * (halfp - T.b) * (halfp - T.c));//sqrt корень из числа  
}

int main() {
	setlocale(LC_ALL, "Russian");
		int n;
		//задача 1
		/*std::cout << "Введите количествол элементов масива\n";
		std::cin >> n;
		int *pArr1 = nullptr;
	try
	{
		memory(pArr1, n);
		fill_arr(pArr1, n, 1, 10);
		std::cout << "Итоговый массив:\n";
		show_arr(pArr1, n);
		std::cout << '\n';
		delete[] pArr1;
	}
	catch(const std::out_of_range& ex)
	{
		std::cout << "Ошибка: " << ex.what() << "\n\n";//метод
	}*/

		//Задача 2 .Массив положительных элементов
		*const int size1 = 7;
		int arr1[size1];
		const int size2 = 10;
		int arr2[size2];
		fill_arr(arr1, size1, -10, 10);
		fill_arr(arr2, size2, -9, 13);
		std::cout << "\n\nМассив #1: \n";
		show_arr(arr1, size1 );
		std::cout << "Массив #2: \n";
		show_arr(arr2, size2);
		int* result_arr = pos_arr_concat(arr1, size1, arr2, size2, n);
		std::cout << "Итоговый массив:\n";
		show_arr(result_arr, n);
		delete[] result_arr;*/
		
		//Задача 3.Площадь произвольного треугольника
		/*std::cout << "\n\nстороны треугольника\n";
		triangle ABC{5.5, 9.1, 10.0};
		std::cout << ABC.a << ", " << ABC.b << ", " << "and " << ABC.c << '\n';
		std::cout << "Площадь треугольника = " << tr_area(ABC) << std::endl;*/


		return 0;
}