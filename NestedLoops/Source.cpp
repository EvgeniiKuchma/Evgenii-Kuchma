#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������� ���������

	/*std::cout << " ������� ���������:\n";
	for (int i = 1; i <= 9; i++) {//���� i
		for (int j = 1; j <= 9; j++)//���� j
			std::cout << i << " * " << j << " = " << i * j << "\t";//��� �������� �� �������� ������� �� �������� �� ������ ���������
		std::cout << "\n";
	}*/

	//��������� � �������

	/*int size = 5;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)*/
			//������� ���������
			/*if (i == j)
				std::cout << " * ";
			else
				std::cout << " . ";*/
			//�������� ���������
			/*if (i + j == size - 1)
					std::cout << " @ ";
				else
					std::cout << " . ";*/
			//������� ��� ������� ����������
			/*if (j > i)
				std::cout << " + ";
			else
				std::cout << " . ";*/
			//������� ��� �������� ����������
			/*if (j + i > size - 1)
				std::cout << " + ";
			else
				std::cout << " . ";*/
		/*std::cout << "\n";
	}*/
	
	//������� ���

	/*std::cout << "������� ������ ����:\n";
	std::cin >> n;
	for (int i = n / 2; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (i >= j && i + j >= n - 1)
				std::cout << "|vvv|";
			else
				std::cout << "     ";
		std::cout << "\n";
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			std::cout << "|###|";
	std::cout << "\n";
		}	*/

	//������������� ���������

	/*int A;
	int B;*/

	/*std::cout << "������ 1 �����: ";
	std::cin >> n;*/

	/*std::cout << "������ 2 �����: ";
	std::cin >> B;
	int res = A + B;
	std::cout << A << " + " << B << "=" << res << "\n";*/
	/*for (int i = 1; i <= n; i++)
		std::cout << "����� " << i << "\n";
	std::cout << "�����\n";*/

	//������� � ���������

	/*std::cout << "\n������� ������:";
	char sym;
	std::cin >> sym;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			std::cout << sym << ' ';
			std::cout << "\n";}*/
	
	//������ 2 ��������  � ���������

	/*std::cout << "������� ������ ���������: ";
	std::cin >> n;
	std::cout << "������� ����� ���������: ";
	std::cin >> m;
	int counter;
	for (int i = n; i <= m; i++) {//���� i ��� ����� �� n �� m
		counter = 1;
		for (int j = 1; j <= i / 2; j++)//���� j ������� ��������� ����� i 
			if (i % j == 0)
				counter++;
		std::cout << "���������� ��������� ����� " << i << " = " << counter << "\n";

	}*/

	return 0;

}