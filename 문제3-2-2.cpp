#include <iostream>
#include <string>
using namespace std;
class Printer {
private:
	string s;
public:
	void SetString(string c);
	void ShowString();
};
void Printer::SetString(string c) {
	s = c;
}
void Printer::ShowString() {
	cout << s << endl;
}
int main(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();
	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}