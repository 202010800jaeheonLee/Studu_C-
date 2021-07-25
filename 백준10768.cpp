#include <iostream>
using namespace std;

int main(void) {
	int m, d;
	cin >> m;
	cin >> d;
	if (m >= 1 && m <= 12 && d >= 1 && d <= 31) {
		if (m<=2&&d<18){
			cout << "Before";
		}
		else if (m==2&&d==18){
			cout << "Special";
		}
		else{
			cout << "After";
		}
	}
	return 0;
}