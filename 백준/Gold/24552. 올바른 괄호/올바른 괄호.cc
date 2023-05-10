#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int count1 = 0, count2 = 0, sum = 0;
    string str;
    cin >> str;
    for (char &c : str)
    {
        if (c == '(')
            count1++, sum++;
        else
            count2++, sum--;
        count1 = !!sum * count1;
        if (sum < 0)
        {
            cout << count2;
            return 0;
        }
    }
    cout << count1;
    return 0;
}