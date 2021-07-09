#include <iostream>
int main(void) {
    int N, fn, sn;
    std::cin >> N;
    int count=0;
    int nn=N;
    if (N >= 0 && N <= 99) {
        int ne;
        do {
            sn = nn % 10;
            nn /= 10;
            fn = nn % 10;
            ne = fn + sn;
            ne = ne % 10;
            nn = (sn * 10) + ne;
            count++;
        } while (N != nn);
        std::cout << count;
    }
	return 0;
}