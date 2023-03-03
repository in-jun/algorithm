#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double k;
    cin >> k;
    if ((k / 100 + 25) < 100)
        printf("%.2f", double(100));
    else if ((k / 100 + 25) > 2000)
        printf("%.2f", double(2000));
    else
        printf("%.2f", (k / 100 + 25));
    return 0;
}