#include <iostream>;


int main() {
	//����������
	int N;//�������� ��������� ���� int c ������ N 
	//�� ������ ������ ����������� ��������������������

	int M = 10;//��������� ���������� ���� int  � ������ 
	//� � �������������� �� �������� 10;
	N = 5;//�������������� n �� ��������� 5;
	std::cout << "N="<<N<<"\n";
	std::cout << "M=" << M << "\n";
	double X = 4.5;//��������� ����������  double ������� x � �������������� ��;
	//��������� 4.5;
	std::cout << "X = " << X << "\n";
	X = -1.01;//������ �������� x";
	std::cout << "New X =" << X << "\n";
	const short weekday=7;//������� ��������� �� ��������� 7

	//weekday = 8; ������� ��������� ������ ������ 

	std::cout << "Weekday = " << weekday << "\n";
		
	//���� ������
	std::cout << "Enter number:";
	int A;
	std::cin >> A;//������ ������� � ������� ������� ���������� � ���������� � 
	//������ 2 �������� ������� ���������� � ���������� � � �
	std::cout << "A=" << A << "\n";
	int B;//��� ����� ��������� int B,C
	int C;
	std::cout<<"Enter two nubers:";
	std::cin >> B >> C;
	std::cout << "B = " << B << "\n";
	std::cout << "C = " << C << "\n";

	//����-�������
	std::cout << "Let's play\nEnter number";
	int E;
	std::cin >> E;
	std::cout << "I have " << E + 1 << "!\n";
	std::cout << "I'm winner!!!)";
	return 0;

	}