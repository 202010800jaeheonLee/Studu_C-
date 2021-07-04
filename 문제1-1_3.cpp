#include <iostream>
int main(void) {
	int num;
	std::cout << "숫자를 하나 입력하세요: ";
	std::cin >> num;
	std::cout << num << "단" << std::endl;
	for (int i = 1; i < 10; i++){
		std::cout << num << 'X' << i << '=' << num*i << std::endl;
	}
	return 0;
}