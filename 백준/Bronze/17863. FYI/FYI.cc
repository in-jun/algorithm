#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int count = 0;
    string n;
    cin >> n;
    for (int i = 0; i < n.length() && n[i] == '5'; i++)
        count++;
    if (count >= 3)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}