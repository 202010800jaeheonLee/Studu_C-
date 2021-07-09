#include <iostream>
using namespace std;
typedef struct __Point {
	int xpos;
	int ypos;
} Point;
Point& PntAdder(const Point& p1, const Point& p2) {
	Point* pr = new Point;
	pr->xpos = p1.xpos + p2.xpos;
	pr->ypos = p1.ypos + p2.ypos;
	return *pr;

}
int main(void) {
	Point* pr1 = new Point;
	pr1->xpos = 3;
	pr1->ypos = 30;
	Point* pr2 = new Point;
	pr2->xpos = 70;
	pr2->ypos = 7;
	Point& pref = PntAdder(*pr1, *pr2);
	cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;
	delete pr1;
	delete pr2;
	delete& pref;
	return 0;
}