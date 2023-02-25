#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int win = 0;
    const int arr[7]{-1, 3, 3, 2, 2, 1, 1};
    char input;
    for (int i = 0; i < 6; i++)
    {
        cin >> input;
        if (input == 'W')
            win++;
    }
    cout << arr[win];
    return 0;
}