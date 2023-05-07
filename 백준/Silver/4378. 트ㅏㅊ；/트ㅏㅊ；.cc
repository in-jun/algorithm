#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string input;
    string keyboard = " `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while (getline(cin, input))
    {
        for (char c : input)
        {
            int index = keyboard.find(c) + !keyboard.find(c);
            cout << keyboard[index - 1];
        }
        cout << '\n';
    }
    return 0;
}
