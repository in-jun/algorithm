#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int n, m, count = 0;
    string image[100];
    string image2[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> image[i];
    for (int i = 0; i < n; i++)
        cin >> image2[i];
    for (int j = 0; j < n; j++)
        for (int i = 0; i < m; i++)
            count += (image[j][i] == image2[j][i]);
    cout << count;
    return 0;
}