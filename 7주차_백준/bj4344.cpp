#include<iostream>

using namespace std;

int main()
{
    int C, N;
    int cnt;
    int score[1000];
    float sum, avg;

    cin >> C;

    for (int i = 0; i < C; i++)
    {
        cin >> N;

        cnt = 0, sum = 0, avg = 0;
        score[1000];

        for (int j = 0; j < N; j++)
        {
            cin >> score[j];
            sum += score[j];
        }

        avg = sum / N;

        for (int k = 0; k < N; k++)
        {
            if (score[k] > avg)
                cnt++;
        }

        printf("%.3f%%\n", (float)cnt / N * 100);
    }
    return 0;
}