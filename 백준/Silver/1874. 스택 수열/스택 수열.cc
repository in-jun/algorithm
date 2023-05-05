#include <iostream>
#include <stack>
#include <vector>
using std::cin;
using std::cout;
using std::stack;
using std::vector;

int main()
{
    int n, num = 1;
    cin >> n;

    int arr[n];
    stack<int> s;
    vector<char> v;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= num)
        {
            while (arr[i] >= num)
            {
                s.push(num++);
                v.push_back('+');
            }
            s.pop();
            v.push_back('-');
        }
        else
        {
            if (s.top() > arr[i])
            {
                cout << "NO";
                return 0;
            }
            else
                v.push_back('-');
            s.pop();
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
    return 0;
}