#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	int sum;
	//���� ��� �������

	/*for (int i = 0; ; i++) {
		if (i == 10)
			break;//��������� ������������� ���������� �����
		std::cout << i << "";
	}*/

	//�������� //break operator

	/*int magic = 7;
	std::cout << "����� �������,\n � ������� ����� �� 1 �� 10 �������� ������� ��� \n";
	for (int t = 1; t <= 5; t++) {
		std::cout << "������� � " << t << "����� �����: ";
		std::cin >> n;
		if (n == magic) {
			std::cout << "you lucky boy\n\n";
			break;//������������� ���� ���� � �������� � ����� 
		}
		if (t == 5) {
			std::cout << "Sorry, you looser\n\n";
			break;
		}
		std::cout << "Not, lets try something else";
	}*/

	//Operator Continue

	/*for (int i = 0; i < 20; i++) {
		if (i % 4 == 0)
			continue;//���������� ������� �������� ����� �� ��������� � ��������� � ���������
			std::cout << i << "";

	}*/

	//�������� �� 10

	/*std::cout << "Task1.\nEnter first number: \n\n";
	int max;
	std::cin >> max;
	for (int i = 1; i < 10; i++) {//����� ������ ���������� � 0 ��� ����� �������������� �� ������������� ����������( n<10)
		std::cout << "\nEnter " << i + 1 << "number\n";
		std::cin >> n;
		if (n > max)
			max = n;//max = n > max ? n : max;� ��������� ����������� �������� ���: ���� � ������ ���� �� � ��� ���� ����� ���� ��� ����
	}
	std::cout << " Vaximum = " << max;*/

	//Task2.����� �� ������� 5

	/*std::cout << "Task2.\n";
	sum = 0;
	for (int i = 0; i < 10; i++) {
		std::cout << "������� " << i + 1 << "�����\n";
		std::cin >> n;
		if (n % 5)
			sum += n;
	}
		std::cout << "����� ����� �� ������� 5 �� =" << sum << ".\n\n";*/
	

	//Task3 ������ � ����� � ���������..������ ������ � �������� �������

	/*std::cout << "������� ������ �������� ���������";
	std::cin >> n;
	std::cout << "Enter ending of diaposon";
	std::cin >> m;
	for (int i = m; i >= n; i -= 2) {
		std::cout << i << ", ";
	}
	std::cout << "\b\b.\n\n";//\b ������� ��������� ������ � ������� ������ ������� ����� �����*/
	
	//Task4.�������� �����.
	
	/*std::cout << "������� �����: ";
	std::cin >> n;
	std::cout << "�������� �����: \n";
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			std::cout << i << ", ";
		}
	}
	std::cout << "\b\b.\n\n";*/

	//Task5.������� ����� ������� ������ �� 1 � �� ���� ����(����������� 2 ��������)

	/*std::cout << "\n������� �����: ";
	std::cin >> n;
	int counter = 1;
	for (int i = 1; i <= n / 2; i++){
		if (n % i == 0);
			counter++;
	}
	if (counter == 2)
		std::cout << n << " simple number\n";
	else
		std::cout << n << " not simple number.\n\n";*/
	




	
	return 0;
}