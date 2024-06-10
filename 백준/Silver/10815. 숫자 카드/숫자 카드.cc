#include <iostream>
#include <set>
using std::cin;
using std::cout;
using std::set;

int main()
{
    std::ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        s.insert(input);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;

        cout << (s.find(input) != s.end()) << ' ';
    }
    return 0;
}