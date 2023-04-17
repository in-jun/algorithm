#include <iostream>
using std::cin;
using std::cout;

int main()
{
    long long int n, sum = 1, count = 1;
    cin >> n;
    if (!n)
    {
        cout << 0;
        return 0;
    }
    while (n > sum)
    {
        sum += sum;
        count++;
    }
    cout << count;
    return 0;
}