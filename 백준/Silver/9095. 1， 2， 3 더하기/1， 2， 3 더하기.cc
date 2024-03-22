#include <iostream>
using std::cin;
using std::cout;

int main()
{
    const int ans[]{0, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274};

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        cout << ans[input] << '\n';
    }
    return 0;
}