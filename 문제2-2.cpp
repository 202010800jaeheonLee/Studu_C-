#include <iostream>
using namespace std;

int main(void) {
	const int num = 12;
	const int* p = &num;
	const int& ref = *p;
	cout << *p << ref;
	return 0;
}