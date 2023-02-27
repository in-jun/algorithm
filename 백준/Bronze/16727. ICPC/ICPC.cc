#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int p1, s1, s2, p2;
    cin >> p1 >> s1 >> s2 >> p2;
    if ((p1 + p2) == (s1 + s2))
    {
        if (p1 == s2)
            cout << "Penalty";
        else if (p1 > s2)
            cout << "Esteghlal";
        else
            cout << "Persepolis";
    }
    else if ((p1 + p2) > (s1 + s2))
        cout << "Persepolis";
    else
        cout << "Esteghlal";
    return 0;
}