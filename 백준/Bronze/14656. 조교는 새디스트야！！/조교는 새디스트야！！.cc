#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    int input;
    int count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        count += (input != i) ? 1 : 0;
    }
    cout << count;
    return 0;
}