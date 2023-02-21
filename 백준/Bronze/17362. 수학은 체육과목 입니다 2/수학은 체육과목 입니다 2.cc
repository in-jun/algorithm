#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    const int arr[8]{2, 1, 2, 3, 4, 5, 4, 3};
    cin >> n;
    cout << arr[n % 8];
    return 0;
}