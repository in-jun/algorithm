#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    bool check;
    bool check2 = false;
    for (int i = 1; i <= 5; i++)
    {
        check = false;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
            if (str[j] == 'F' && str[j + 1] == 'B' && str[j + 2] == 'I')
                check = true;
        if (check)
        {
            cout << i << ' ';
            check2 = true;
        }
    }
    if (!check2)
        cout << "HE GOT AWAY!";
    return 0;
}