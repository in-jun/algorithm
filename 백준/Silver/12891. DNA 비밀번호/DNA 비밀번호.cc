#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::string;

int main()
{
    string str;
    map<char, int> m{{'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}};
    int s, p, count = 0, arr1[4], arr2[4]{0};
    cin >> s >> p >> str >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3];
    for (int i = 0; i < p; i++)
        arr2[m[str[i]]]++;
    for (int i = 1; i + p <= s; i++)
    {
        count += (arr1[0] <= arr2[0]) && (arr1[1] <= arr2[1]) && (arr1[2] <= arr2[2]) && (arr1[3] <= arr2[3]);
        arr2[m[str[i + p - 1]]]++, arr2[m[str[i - 1]]]--;
    }
    count += (arr1[0] <= arr2[0]) && (arr1[1] <= arr2[1]) && (arr1[2] <= arr2[2]) && (arr1[3] <= arr2[3]);
    cout << count;
    return 0;
}