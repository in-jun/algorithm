#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int input, arr[2]{0};
    for (int i = 0; i < 3; i++)
    {
        cin >> input;
        arr[input - 1]++;
    }
    cout << ((arr[0] > arr[1]) ? 1 : 2);
    return 0;
}