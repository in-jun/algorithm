#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++)
        cout << str;
    return 0;
}