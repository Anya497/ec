#include <iostream>
#include <locale.h>


void existing(int m, int f) {
	int k = 0;
	for (int i = 1; i <= m - 1; i++) {
		if ((i * i) % m == f) {
			std::cout << "Да" << std::endl;
			k = 1;
			break;
		}
	}
	if (k == 0) {
		std::cout << "Нет" << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	std::cout << "N = ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		int m, f;
		std::cout << "m = ";
		std::cin >> m;
		std::cout << "f = ";
		std::cin >> f;
		existing(m, f);
	}
}