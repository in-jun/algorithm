#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << " @@@   @@@  ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << "@   @ @   @ ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << "@    @    @ ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << "@         @ ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << " @       @  ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << "  @     @   ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << "   @   @    ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << "    @ @     ";
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << "     @      ";
    return 0;
}