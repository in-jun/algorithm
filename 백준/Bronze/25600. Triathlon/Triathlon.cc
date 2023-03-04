#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, a, d, g, max = 0, score;
    cin >> n;
    while (n--)
    {
        cin >> a >> d >> g;
        score = a * (d + g);
        score *= (a == (d + g)) + 1;
        max = (max < score) ? score : max;
    }
    cout << max;
    return 0;
}