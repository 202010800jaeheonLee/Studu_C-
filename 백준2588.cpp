#include <iostream>
int main(void) {
    int num1, num2, result, resultf, d;
    std::cin >> num1;
    std::cin >> num2;
    resultf = num1 * num2;
    while (num2>0){
        d = num2 % 10;
        num2 /= 10;
        result = num1 * d;
        std::cout << result << std::endl;
    }
    std::cout << resultf << std::endl;
	return 0;
}