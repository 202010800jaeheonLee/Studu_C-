#include <iostream>

int main1(void) {

	int val, result=0;
	for (int i = 1; i < 6; i++) {
		std::cout << i << "번째 정수 입력: ";
		std::cin >> val;
		result += val;
	}
	std::cout << "합계: " << result << std::endl;
	return 0;
}