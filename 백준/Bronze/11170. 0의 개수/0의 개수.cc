#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        int n, m;
        cin >> n >> m;

        for (int i = n; i <= m; i++)
        {
            int num = i;

            if (num == 0)
            {
                count++;
            }

            while (num)
            {
                if (num % 10 == 0)
                {
                    count++;
                }
                num /= 10;
            }
        }

        cout << count << '\n';
    }

    return 0;
}