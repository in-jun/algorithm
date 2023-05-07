#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::max;
using std::min;

int main()
{
    int n, dp_max[3]{0}, dp_min[3]{0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int temp_max0 = dp_max[0], temp_max1 = dp_max[1], temp_max2 = dp_max[2];
        int temp_min0 = dp_min[0], temp_min1 = dp_min[1], temp_min2 = dp_min[2];
        dp_max[0] = max(temp_max0, temp_max1) + a;
        dp_max[1] = max({temp_max0, temp_max1, temp_max2}) + b;
        dp_max[2] = max(temp_max1, temp_max2) + c;
        dp_min[0] = min(temp_min0, temp_min1) + a;
        dp_min[1] = min({temp_min0, temp_min1, temp_min2}) + b;
        dp_min[2] = min(temp_min1, temp_min2) + c;
    }

    cout << max({dp_max[0], dp_max[1], dp_max[2]}) << ' ';
    cout << min({dp_min[0], dp_min[1], dp_min[2]});
    return 0;
}