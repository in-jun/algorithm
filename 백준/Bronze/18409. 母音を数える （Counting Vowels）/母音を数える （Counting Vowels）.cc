#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, count = 0;
    char s[51];
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        if ((s[i] == 'a') || (s[i] == 'i') || (s[i] == 'u') || (s[i] == 'e') || (s[i] == 'o'))
            count++;
    cout << count;
    return 0;
}