#include <iostream>
//�������� ������ ��������� ������
long long factorial(int num)
{
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}
//����� ��������� ��� ������� num 
int fibonacci(int num)
	{
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
	}
int main ()
{
	int n;
	setlocale(LC_ALL, "Russian");

	//�������� ������ ���������

	/*std::cout << "������� ����� ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n";*/

	//����� ��������� ��� ������� num
	
	std::cout << "������� ����� ����� ���������: ";
	std::cin >> n;
	std::cout << "����� ��������� � ������� " << n <<" = " << fibonacci(n);
	std::cout << "\n\n������ 13 ����� ��������� ";
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ", ";
	std::cout << "\n";
	return 0;
}