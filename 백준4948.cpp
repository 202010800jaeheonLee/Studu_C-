#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n, root, m,n,cnt=0;
    while (true) {
        cin >> n;
        if (!n) break;
        m = n + 1;
        n = n * 2;
        for (int i = m; i <= n; i++){
            root = sqrt(i);
            if (root == 1 && i != 1) {
                cnt++;
                continue;
            }
            if (i%2)
            {
                for (int j = 2; j <= root; j++) {
                    if (!(i % j)) break;
                    if (j == root) {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}