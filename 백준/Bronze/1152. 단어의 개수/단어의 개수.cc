#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string a;
    int count = 1;
    getline(cin, a);
    if (a.empty())
    {
        cout << '0';
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == ' ')
                count++;
        }
        cout << ((a[a.length() - 1] == ' ') ? --((a[0] == ' ') ? --count : count) : ((a[0] == ' ') ? --count : count));
    }
    return 0;
}