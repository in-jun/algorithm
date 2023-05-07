#include <iostream>
#include <stack>
#include <vector>
using std::cin;
using std::cout;
using std::stack;
using std::vector;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    vector<int> ans(n, -1);
    stack<int> s;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] < arr[i])
        {
            ans[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    return 0;
}