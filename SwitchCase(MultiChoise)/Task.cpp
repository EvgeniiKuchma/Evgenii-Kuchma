#include <iostream>


int main () {
	setlocale(LC_ALL, "Russian");
	
	//������ If else

	/*std::cout << "������� ����� �� 1 �� 4\n";
	int n;
	std::cin >> n;

	if (n == 1)
		std::cout << "����\n";
	else
		if (n == 2)
			std::cout << "���.\n";
		else
			if (n == 3)
				std::cout << "���.\n";
			else
				if (n == 4)
					std::cout << "������.\n";
				else
					std::cout << "������ �����\n";*/

	//����� switch

	/*������ ������ switch:
	1. ������ ���������� �������� (�������� �� 1 �� 100);
	2. � ����� ������ �������� ���������� ��������(� ������ ����� ���� ������ ���������);
	3. ������ ������������� ��������;
	4. ������ ��������� �����.
	
	//char sym = 'A';//���������� �������� ������ � ��������� ��������

	switch (n){//switch (sym) {
	case 1:std::cout << "����\n"; break;
	case 2:std::cout << "���\n"; break;
	case 3:std::cout << "���\n"; break;
	case 4:std::cout << "������\n"; break;
	default:std::cout << "������ �����\n"; break;//� ����� ������� break �� ��������
	}*/

	//�������� "��������� � ���"

	/*std::cout << "������� ����� �� 0 �� 15\n";
	int dec;
	std::cin >> dec;
	switch (dec) {
	case 0: case 1: case 2: case 3: case 4:
	case 5: case 6: case 7: case 8: case 9:
		std::cout << dec << " � �����.= " << dec << " � �����������.\n"; break;
	case 10:
		std::cout << " 10 � ����. = � � ����.\n"; break;
	case 11:
		std::cout << " 11 � ����. = B � ����.\n"; break;
	case 12:
		std::cout << " 12 � ����. = C � ����.\n"; break;
	case 13:
		std::cout << " 13 � ����. = D � ����.\n"; break;
	case 14:
		std::cout << " 14 � ����. = E � ����.\n"; break; 
	case 15:
		std::cout << " 15 � ����. = F � ����.\n"; break;
	default:
		std::cout << "������ �����.\n";*/

	//��������� ��������� "?"-(��) ":" -(�����)

	/*int x;
	std::cout << "������� �����: ";
	std::cin >> x;

	x > 0 ? std::cout << "TRUE.\n" : std::cout << "FALSE.\n";
	//�������			�������1				��������2

	int A, B;

	std::cout << "������� 2 �����: ";
	std::cin >> A >> B;
	int max = (A > B) ? A : B;//������ ���������� ��������� ��������
	std::cout << "����.= " << max << ".\n";*/

	//������ 1
	
	/*std::cout << "Enter number: ";
	int D;
	std::cin >> D;
	if (D>=0 && D <= 100)
		std::cout << "����� ����������� ��������� �� 0 �� 100.\n\n";
	else 
		if(D>=101 && D<=200)
			std::cout << "����� ����������� ��������� �� 101 �� 200.\n\n";
		else
			if(D>=201 && D<=300)
				std::cout << "����� ����������� ��������� �� 201 �� 300.\n\n";
			else
				std::cout << "����� �� ����������� ��������� �� ������ ���������.\n\n";*/

	//����� 2

	/*std::cout << "������� 2 �����: \n";
	double n, m;
	std::cin >> n >> m;

	std::cout << "�������� ��������: \n";
	std::cout << "1. �����;\n";
	std::cout << "2. ��������;\n";
	std::cout << "3. ������������;\n";
	std::cout << "4. �������\n";
	std::cout << " ����->";

	short answer;
	std::cin >> answer;
	
	switch (answer) {
	case 1:std::cout << n << "+" << m << "=" << n + m << ".\n\n"; break;
	case 2:std::cout << n << "-" << m << "=" << n - m << ".\n\n"; break;
	case 3:std::cout << n << "*" << m << "=" << n * m << ".\n\n"; break;
	case 4:
		if (m == 0)
			std::cout << "�� 0 ������ ������.\n\n";
		else
		std::cout << n << "/" << m << "=" << n / m << ".\n\n"; break;
	default:std::cout << "������ �����.\n\n"; break;}*/
	
	
	return 0;

}