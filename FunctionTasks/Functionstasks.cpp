//������ ������� �++
#include <iostream>
//������ 1//����  �������� �����������  ��  ����� � ����� ���� ������ ��������� �� ������������� int width, int heigth
void rect(int width = 5, int heigth = 5)
{
	for (int y = 0; y < heigth; y++)
	{
	for (int x = 0; x < width; x++)
	std::cout << "#";
	std::cout << "\n";
	}
}
//������ 2 ������� �����
bool is_prime(int num) 
{
	int counter = 1;
	static int primes = 0;
	for (int i = 1; i <= num / 2; i++)
		if (num % i == 0)
			counter++;
	if (counter == 2) {
		primes++;
		return true;
	}
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
		int n, m;
		
		//������������� ������ 1
	
		/*std::cout << "W ";
		std::cin >> n;
		std::cout << "H ";
		std::cin >> m;
		rect(n, m);
		std::cout << "-------\n";
		rect();
		std::cout << "\n";*/

		//����� 2 

		std::cout << "������� �����: ";
		std::cin >> n;
		if (is_prime(n))//��������� ��� ������ � ����� ������ bool  �  ����� 
			std::cout << "����� �������\n";
		else
			std::cout << "����� �� �������\n";

		
		return 0;
}