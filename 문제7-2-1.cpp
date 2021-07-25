#include <iostream>
using namespace std;
class Rectangle {
private:
	int x;
	int y;
public:
	Rectangle(int xr, int yr) :x(xr), y(yr) {	}
	void ShowAreaInfo() {
		cout << "¸éÀû: " << x * y << endl;
	}
};
class Square :public Rectangle {
public:
	Square(int xs) : Rectangle(xs, xs){	}
};
int main(void) {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();
	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}