#include <iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool v[9] = { 0, };

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == false)
        {
            v[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1);
            v[i] = false;
        }
    }
}

int main(void) {
    cin >> n >> m;
    dfs(0);
    return 0;
}