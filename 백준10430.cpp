#include <iostream>
int main(void) {
	int A, B, C;
	std::cin >> A >> B >> C;
	if (A >= 2 && A <= 10000 && B >= 2 && B <= 10000 && C >= 2 && C <= 10000) {
		std::cout << (A + B) % C << std::endl;
		std::cout << ((A % C)+ (B % C)) % C << std::endl;
		std::cout << (A * B) % C << std::endl;
		std::cout << ((A % C) * (B % C)) % C << std::endl;
	}
	return 0;
}