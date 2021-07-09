#include <iostream>
#include <string>
using namespace std;
int main(void) {
	int N;
	std::cin >> N;
	string s[100];
	for (int i = 0; i < N; i++){
		std::cin >> s[i];
		if (s[i].length()>50){
			break;
		}
	}
	for (int i = 0; i < N; i++){
		std::cout << i+1<< "." << s[i] << std::endl;
	}
	return 0;
}