#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance)
{
    vector<pair<int, int>> arr;

    for (int i = 0; i < rank.size(); i++)
        arr.push_back({attendance[i] ? rank[i] : 101, i});

    sort(arr.begin(), arr.end());

    return 10000 * arr[0].second + 100 * arr[1].second + arr[2].second;
}