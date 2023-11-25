#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices)
{
    string answer = "";

    for (int i = 0; i < my_string.length(); i++)
        if (find(indices.begin(), indices.end(), i) == indices.end())
            answer += my_string[i];

    return answer;
}