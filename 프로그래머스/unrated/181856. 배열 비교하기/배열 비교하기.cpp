#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2)
{
    int sum1 = 0, sum2 = 0;

    if (arr1.size() != arr2.size())
        return arr1.size() < arr2.size() ? -1 : 1;

    for (int n : arr1)
        sum1 += n;
    for (int n : arr2)
        sum2 += n;

    if (sum1 != sum2)
        return sum1 < sum2 ? -1 : 1;

    return 0;
}