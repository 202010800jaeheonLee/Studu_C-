#include <iostream>

int main(void) {
	char name[100];
	char phone[100];
	std::cout << "이름과 전화번호를 입력하세요." << std::endl;
	std::cin >> name >> phone;
	std::cout << name << ' ' << phone << std::endl;
	return 0;
}