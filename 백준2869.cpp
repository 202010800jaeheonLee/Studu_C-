#include <iostream>
using namespace std;

int main(void) {
	int a, b, v, count=0;

	cin >> a >> b >> v;
	if (b>=1&&a>b&&v>=a&&v<=1000000000)
	{
		while (true)
		{
			v -= a;
			if (v <= 0) {
				count++;
				break;
			}
			else {
				v += b;
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}