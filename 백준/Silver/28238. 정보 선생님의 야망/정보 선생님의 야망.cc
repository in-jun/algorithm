#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int count[10]{0};
    int check[10][2]{
        {0, 1},
        {0, 2},
        {0, 3},
        {0, 4},
        {1, 2},
        {1, 3},
        {1, 4},
        {2, 3},
        {2, 4},
        {3, 4},
    };
    string ans[10]{
        "1 1 0 0 0",
        "1 0 1 0 0",
        "1 0 0 1 0",
        "1 0 0 0 1",
        "0 1 1 0 0",
        "0 1 0 1 0",
        "0 1 0 0 1",
        "0 0 1 1 0",
        "0 0 1 0 1",
        "0 0 0 1 1",
    };

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        bool input[5];
        cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4];
        for (int j = 0; j < 10; j++)
            if (input[check[j][0]] && input[check[j][1]])
                count[j]++;
    }

    int M = 0, index = 0;
    for (int i = 0; i < 10; i++)
    {
        if (M < count[i])
        {
            M = count[i];
            index = i;
        }
    }

    cout << M << '\n';
    cout << ans[index];
    return 0;
}