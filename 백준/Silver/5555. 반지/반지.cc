#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string findStr;
    cin >> findStr;

    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        str += str.substr(0, findStr.size());
        if (str.find(findStr) != string::npos)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}