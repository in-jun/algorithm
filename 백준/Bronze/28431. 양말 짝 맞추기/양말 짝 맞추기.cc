#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int arr[10]{0};
    for (int i = 0; i < 5; i++)
    {
        int input;
        cin >> input;
        arr[input]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 1 || arr[i] == 3 || arr[i] == 5)
        {
            cout << i;
            break;
        }
    }
    return 0;
}