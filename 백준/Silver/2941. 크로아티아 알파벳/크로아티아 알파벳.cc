#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    string arr[8]{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    cin >> str;
    int count = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (str.substr(i, 2) == arr[j])
            {
                count--;
                break;
            }
            if (str.substr(i, 3) == arr[j])
            {
                count--;
                break;
            }
        }
    }
    cout << count;
    return 0;
}