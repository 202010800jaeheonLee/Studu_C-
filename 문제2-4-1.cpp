#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	const char *s1 = "abc";
	const char *s2 = "efg";
	char s3[50];
	cout << strlen(s1) << endl;
	cout << strlen(s2) << endl;
	strcpy_s(s3, s1);
	strcat_s(s3, s1);
	cout << strlen(s3) << endl;
	if (strcmp(s1, s2)==0){
		cout << "같다." << endl;
	}
	else{
		cout << "다르다." << endl;
	}
	return 0;
}