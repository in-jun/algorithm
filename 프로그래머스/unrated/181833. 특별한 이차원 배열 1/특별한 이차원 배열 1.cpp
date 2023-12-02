#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n)
{
    vector<vector<int>> answer(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        answer[i][i] = 1;

    return answer;
}