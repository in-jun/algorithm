#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int count = 0;
    char s[21];
    while (scanf("%[^\n]%*c", s) != EOF)
        count++;
    cout << count;
    return 0;
}