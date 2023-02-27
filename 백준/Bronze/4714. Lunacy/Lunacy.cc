#include <iostream>
using std::cin;

int main()
{
    double x;
    while (cin >> x && (x >= 0))
        printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, x * 0.167);
    return 0;
}