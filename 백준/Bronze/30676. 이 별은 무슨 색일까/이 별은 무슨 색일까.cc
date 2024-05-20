#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    if (n >= 620)
        cout << "Red";
    else if (n >= 590)
        cout << "Orange";
    else if (n >= 570)
        cout << "Yellow";
    else if (n >= 495)
        cout << "Green";
    else if (n >= 450)
        cout << "Blue";
    else if (n >= 425)
        cout << "Indigo";
    else
        cout << "Violet";
    return 0;
}