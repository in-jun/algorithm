#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::min;
using std::vector;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    long long max = 0;
    vector<int> A(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> A[i], max += A[i];

    vector<int> I;
    for (int i = 0; i <= n + 1; i++)
        if (A[i] != 1)
            I.push_back(i);

    int k = I.size() - 2;
    long long ans = n;

    for (int i = 1; i <= k; i++)
    {
        long long mul = 1, sum = 0;
        for (int j = i; j <= k; j++)
        {
            mul *= A[I[j]];
            sum += A[I[j]] - 1;
            if (mul > max)
                break;
            if (i != j)
            {
                long long U = I[i] - I[i - 1] - 1;
                long long V = I[j + 1] - I[j] - 1;
                long long Z = mul - (sum + I[j] - I[i] + 1);
                if (0 <= Z && Z <= U + V)
                    ans += min({Z, U + V - Z, U, V}) + 1;
            }
        }
    }
    cout << ans;
}