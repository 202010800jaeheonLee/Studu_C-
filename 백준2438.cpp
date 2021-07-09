#include <iostream>
#include <string>
using namespace std;
int main(void) {
	int N;
	string s="*";
	std::cin >> N;
	if (N>=1&&N<=100){
		for (int i = 0; i < N; i++){
			std::cout << s << std::endl;
			s += "*";
		}
	}
	return 0;
}