#include<iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	/*std::cout << "\n������� ������ ���� l: \n";
	int  l;
	std::cin >> l;
	std::cout << "\n������� ������ ���� h: \n";
	int  h;
	std::cin >> h;
	if (h % 2 == 0 || l % 2 == 0 || l < 5 || h < 5)
		std::cout << "Input errors";
	else
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++){
			if (j == 0 || i == 0 || i == h - 1 || j == l - 1)
				std::cout << "# ";
			else
				if (i == (h - 1) / 2 || j == (l - 1) / 2)
					std::cout << "* ";
					else
					std::cout << "  ";
		}
		std::cout << "\n";
		}*/
	int n,m, max;
	std::cout << "������� ��� �� �������: \n";
	std::cin >> n;
	std::cout << "������� ������� 1�� ������: \n";
	std::cin >>max;
	for (int i = 1; i < n; i++){
		std::cout << "������� �������"<<i+1<< "������";
	std::cin >> m;
	if (m > max)
		max = m;
}
	std::cout << "C���� ������ " << max;
	return 0;
		}