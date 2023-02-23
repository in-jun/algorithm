#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, input;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> input;
    cout << ((n == 0) ? "divide by zero" : "1.00");
    return 0;
}