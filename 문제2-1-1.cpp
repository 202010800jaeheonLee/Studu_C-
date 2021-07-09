#include <iostream>
using namespace std;
void Increase(int &in) {
	in++;
}
void Change(int &ch) {
	ch *= -1;
}
int main(void) {
	int num;
	cin >> num;
	Increase(num);
	cout << num << endl;
	Change(num);
	cout << num << endl;
	return 0;
}