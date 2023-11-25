#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int k)
{
    vector<int> answer;

    for (int i = k; i <= n; i += k)
        answer.push_back(i);

    sort(answer.begin(), answer.end());

    return answer;
}