#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int t1, v1, t2, v2;
    cin >> t1 >> v1 >> t2 >> v2;
    if (t2 < 0 && v2 >= 10)
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
    else if (t1 > t2)
        cout
            << "MCHS warns! Low temperature is expected tomorrow.";
    else if (v1 < v2)
        cout << "MCHS warns! Strong wind is expected tomorrow.";
    else
        cout << "No message";
    return 0;
}