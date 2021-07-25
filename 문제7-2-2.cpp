#include <iostream>
#pragma warning(disable:4996)
using namespace std;
class Book {
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(char* t, char* i, int p) :price(p) {
		title = new char[strlen(t) + 1];
		isbn = new char[strlen(i) + 1];
		strcpy(title, t);
		strcpy(isbn, i);
	}
	void ShowBookInfo() {
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
};
class EBook :public Book {
private:
	char* DRMKey;
public:
	EBook(char* t, char* i, int p, char* k) :Book(t, i, p) {
		DRMKey = new char[strlen(k) + 1];
		strcpy(DRMKey, k);
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}
};
int main(void) {
	Book book((char*)"좋은 C++", (char*)"555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook((char*)"좋은 C++ ebook", (char*)"555-12345-890-1", 10000, (char*)"fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}