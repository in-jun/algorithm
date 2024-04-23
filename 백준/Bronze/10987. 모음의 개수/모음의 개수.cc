#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    cin >> str;

    int count = 0;
    for(char c : str)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
