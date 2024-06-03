#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::to_string;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        string str = to_string(i);
        for (char c : str)
        {
            if ((c - '0') != 0 && (c - '0') % 3 == 0)
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}