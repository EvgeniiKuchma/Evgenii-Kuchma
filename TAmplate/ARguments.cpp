//������ ������� �++
#include <iostream>
int g = 10;//���������� ���������� 
void arr_x5(int arr[])//��� �������� ������� � ������ ��� ��������� ���������� � ����� ���� ��/���������� ������� 
{
	//el *= 5;
	arr[0] *= 5;
}
void mult_X5(int num)
{
	//std::cout << num * 5 << "\n";
	//return num * 5;
	num *= 5;//2 ������ ����������
}
int power(int num, int p = 2)
{
	int res = 1;
	for (int i = 1; i <= p; i++)
		res *= num;
	return res;
}
int main() {
	setlocale(LC_ALL, "Russian");
		int n, m;
		//�������� � �������
		/*n = 4;//2 ������ ����������
		mult_X5(n);
		std::cout << n << "\n";*/
		//��������� � ���������
		/*int mass[3]{2,3,40};//��� �������� ������� � �������������� ��������� � ���� ������� ����� ������� ����� �� ��������� arr[]{0,0,0,} ��������
		arr_x5(mass);
		//arr_x5(mass[0]);//�������� 1 � ������� ������� � �������� 0 , ������ ������� ������� ����� ������ 0
		std::cout << mass[0] << "\n";*/
		//��������� �� ���������
		/*std::cout << power(3, 3) << "\n";
		std::cout << power(10) << "\n";
		std::cout << power(5, 4) << "\n";
		std::cout << power(9) << "\n";
		std::cout << power(19) << "\n";*/
		std::cout << g << std::endl;
		return 0;
}