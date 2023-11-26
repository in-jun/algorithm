#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> str_list)
{
    vector<string> answer;
    int l = -1, r = -1;

    for (int i = 0; i < str_list.size() && l == -1 && r == -1; i++)
    {
        if (str_list[i] == "l")
            l = i;
        if (str_list[i] == "r")
            r = i;
    }

    if (l != -1 && r == -1)
        answer.insert(answer.begin(), str_list.begin(), str_list.begin() + l);
    else if (l == -1 && r != -1)
        answer.insert(answer.begin(), str_list.begin() + r + 1, str_list.end());

    return answer;
}