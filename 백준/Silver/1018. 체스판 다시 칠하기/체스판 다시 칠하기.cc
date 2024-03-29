#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    string white = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
    string black = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";

    int n, m;
    cin >> n >> m;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int answer = 64;

    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            string temp = "";
            for (int k = i; k < i + 8; k++)
                for (int l = j; l < j + 8; l++)
                    temp += v[k][l];

            int cnt1 = 0, cnt2 = 0;
            for (int k = 0; k < 64; k++)
            {
                if (temp[k] != white[k])
                    cnt1++;
                if (temp[k] != black[k])
                    cnt2++;
            }

            answer = std::min(answer, std::min(cnt1, cnt2));
        }
    }

    cout << answer;
    return 0;
}