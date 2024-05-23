#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n, 0);
    vector<int> answer(n, 0);

    for (int i = 0; i < n; i++)
    {
        answer[i] += i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        arr = answer;
        for (int i = a; i <= b; i++)
        {
            answer[i - 1] = arr[a + b - i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << ' ';
    }
    return 0;
}
