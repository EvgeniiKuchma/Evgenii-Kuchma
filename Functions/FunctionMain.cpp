//������ ������� �++
#include <iostream>
//������� �������
int sum(int num1, int num2)//��� �������� ���������� � ������ 
//��� ������ ����������� �������� ��� ������� �������� 
{
	int res = num1 + num2;//return num1+num2 -  2� �������
	return res;
}
void hi()//� ������� ���� ��� ������ � ���������� ��������� � ������ ��������� ����� ��������������
{
	std::cout << "hi world\n";
	if (1)
		return;
	std::cout << "by world\n";
}
int sum_arr(int arr[], const int length);//�������� ������ ��� ������� ������ ��� ��� ����

/*int sum_arr(int arr[], const int length)
{
	int res = 0;
	for (int i = 0; i < length; i++)
		res += arr[i];
	return res;
}*/
int main() 
{
	setlocale(LC_ALL, "Russian");
		int n, m;
		
		//hi
		/*hi();//������ � ����� ������ ����*/
		
		
		/*std::cout << "������� 2 �����: \n";
		std::cin >> n >> m;
		std::cout << sum(n, m) <<"\n";
		std::cout << sum(7,14) << "\n";//������� ������� � �������*/
		
		//Sum arr ����� �������
		const int size = 5;
		int arr[size]{ 6,4,1,9,10 };
		std::cout << sum_arr(arr, size) << "\n";
		
		return 0;
}
int sum_arr(int arr[], const int length)
{
	int res = 0;
	for (int i = 0; i < length; i++)
		res += arr[i];
	return res;
}