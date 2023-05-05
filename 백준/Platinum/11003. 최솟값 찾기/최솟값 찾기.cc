#include <iostream>
#include <deque>
using std::cin;
using std::cout;
using std::deque;
using std::ios;
using std::pair;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, l;
    cin >> n >> l;
    deque<pair<int, int>> d;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        while (d.size() && d.back().first > input)
            d.pop_back();
        d.push_back(pair(input, i));
        if (d.front().second <= i - l)
            d.pop_front();
        cout << d.front().first << ' ';
    }
    return 0;
}