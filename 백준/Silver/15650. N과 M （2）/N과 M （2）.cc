#include <iostream>
using std::cin;
using std::cout;

int n, m;
int ans[8]{0};

void find(int num, int start)
{
    if (num == m)
    {
        for (int i = 0; i < m; i++)
            cout << ans[i] + 1 << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i < n; i++)
        ans[num] = i, find(num + 1, i + 1);
}

int main()
{
    cin >> n >> m;
    find(0, 0);
    return 0;
}