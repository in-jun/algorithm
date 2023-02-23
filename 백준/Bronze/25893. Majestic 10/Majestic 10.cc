#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int n, input[3], count;
    const string arr[4]{
        "zilch",
        "double",
        "double-double",
        "triple-double",
    };
    cin >> n;
    while (n--)
    {
        count = 0;
        cin >> input[0] >> input[1] >> input[2];
        for (int i = 0; i < 3; i++)
        {
            if (input[i] >= 10)
                count++;
        }
        cout << input[0] << ' ' << input[1] << ' ' << input[2] << '\n';
        cout << arr[count] << "\n\n";
    }
    return 0;
}