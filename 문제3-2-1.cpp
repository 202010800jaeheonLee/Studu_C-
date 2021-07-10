#include <iostream>
using namespace std;
class Calculator {
private:
	int countA;
	int countD;
	int countMi;
	int countMu;
public:
	void Init();
	double Add(double a, double b);
	double Div(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	void ShowOpCount();
};
void Calculator::Init() {
	countA=0;
	countD=0;
	countMi=0;
	countMu=0;
}
double Calculator::Add(double a, double b) {
	countA++;
	return a + b;
}
double Calculator::Div(double a, double b) {
	countD++;
	return a / b;
}
double Calculator::Min(double a, double b) {
	countMi++;
	return a - b;
}
double Calculator::Mul(double a, double b) {
	countMu++;
	return a * b;
}
void Calculator::ShowOpCount() {
	cout << "µ¡¼À: " << countA << " »¬¼À: " << countMi << " °ö¼À: " << countMu << " ³ª´°¼À: " << countD << endl;
}
int main(void) {
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.2 / 1.7 = " << cal.Div(3.2, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "3.2 * 2.4 = " << cal.Mul(3.2, 2.4) << endl;
	cal.ShowOpCount();
	return 0;
}