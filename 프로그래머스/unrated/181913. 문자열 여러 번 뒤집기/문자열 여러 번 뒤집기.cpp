#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries)
{
    string answer = my_string;

    for (vector<int> v : queries)
    {
        int s = v.front(), e = v.back();
        reverse(answer.begin() + s, answer.begin() + e + 1);
    }

    return answer;
}