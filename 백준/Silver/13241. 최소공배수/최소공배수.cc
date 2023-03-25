#include <iostream>
using std::cin;
using std::cout;

int main()
{
    long long int a, b, tmp, input1, input2;
    cin >> input1 >> input2;
    a = input1;
    b = input2;
    while (b)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    cout << (input1 * input2) / a;
    return 0;
}