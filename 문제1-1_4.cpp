#include <iostream>
int main(void) {
	int m, result = 0;
	do {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> m;
		if (m == -1) {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
		result = 50 + m * 0.12;
		std::cout << "이번 달 급여: " << result << "만원" << std::endl;
	} while (true);
	return 0;
}