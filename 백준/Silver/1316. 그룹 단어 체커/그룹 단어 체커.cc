#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        string str;
        bool check = true;
        cin >> str;
        for (int i = 0; i < str.length() - 1; i++)
            if (str[i] != str[i + 1])
                for (int j = i + 1; j < str.length(); j++)
                    if (str[j] == str[i])
                        check = false;
        count += check;
    }
    cout << count;
    return 0;
}