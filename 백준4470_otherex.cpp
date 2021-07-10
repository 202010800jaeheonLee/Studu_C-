#include<iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;

	char str[50][50];
	for (int i = 0; i < N; i++) {

		cin.getline(str[i], 50);
	}
	for (int i = 0; i < N; i++) {
		cout << i + 1 << ". " << str[i] << endl;
	}

	return 0;
}