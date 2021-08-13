#include <iostream>
using namespace std;

int main(void) {
	int d[5001];
	int N, K;
	int now = 0;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		d[i] = i;
	}
	cout << '<';
	while (N>0)
	{
		now = (now + K) % N;
		if (now == 0)
			now = N;
		if (N == 1) {
			cout << d[1]<<'>';
		}
		else
		{
			cout << d[now]<<", ";
			for (int i = now; i < N; i++)
			{
				d[i] = d[i + 1];
			}
			now -= 1;
		}
		N -= 1;
	}
	return 0;
}