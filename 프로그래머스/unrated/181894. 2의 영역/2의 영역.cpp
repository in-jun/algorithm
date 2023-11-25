#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    auto a = find(arr.begin(), arr.end(), 2);
    auto b = find(arr.rbegin(), arr.rend(), 2).base();

    if (a == arr.end())
        return {-1};

    return {a, b};
}