#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'i' || str[i] == 'I')
            {
                str[i] -= 4;
            }
            else if (str[i] == 'e' || str[i] == 'E')
            {
                str[i] += 4;
            }
        }
        cout << str << '\n';
    }
    return 0;
}