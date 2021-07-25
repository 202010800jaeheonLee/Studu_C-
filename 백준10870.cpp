#include <iostream>
using namespace std;
int fibo(int num) {
	if (num==0)
	{
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	else
	{
		return fibo(num - 2) + fibo(num - 1);
	}
}
int main(void) {
	int n;
	cin >> n;
	if (n >= 0 && n <= 20) {
		cout << fibo(n) << endl;
	}
	return 0;
}