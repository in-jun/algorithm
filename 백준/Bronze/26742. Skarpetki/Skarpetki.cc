#include <iostream>
using std::cin;
using std::cout;

int main()
{
    char input;
    int black = 0, white = 0;
    while (scanf("%c", &input) && input != '\n')
    {
        if (input == 'B')
            black++;
        else
            white++;
    }
    cout << ((black / 2) + (white / 2));
    return 0;
}