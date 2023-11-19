#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer = arr;

    for (vector<int> s : queries)
        swap(answer[s[0]], answer[s[1]]);

    return answer;
}