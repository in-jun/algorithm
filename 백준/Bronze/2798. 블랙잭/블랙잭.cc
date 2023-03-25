#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, m, card[100], sum, max = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> card[i];
    for (int k = 0; k < n; k++)
        for (int j = 0; j < n; j++)
            for (int i = 0; i < n; i++)
            {
                if ((i == j) || (j == k) || (k == i))
                    continue;
                sum = card[i] + card[j] + card[k];
                max = ((sum <= m) && (max < sum) ? sum : max);
            }
    cout << max;
    return 0;
}