#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int max = 0;
    int maxindex = 0;
    char c;
    int alphabet[26]{
        0,
    };
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        alphabet[(('Z' < str[i]) ? (str[i] - 'a') : (str[i] - 'A'))]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (max <= alphabet[i])
        {
            if (max == alphabet[i])
            {
                c = '?';
            }
            else
            {
                maxindex = i;
                max = alphabet[maxindex];
                c = maxindex + 'A';
            }
        }
    }
    cout << c;
    return 0;
}