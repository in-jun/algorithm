#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str[5];
    char c;
    for (int i = 0; i < 5; i++)
        cin >> str[i];
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 5; j++)
            if (i < str[j].length())
                cout << str[j][i];
    return 0;
}