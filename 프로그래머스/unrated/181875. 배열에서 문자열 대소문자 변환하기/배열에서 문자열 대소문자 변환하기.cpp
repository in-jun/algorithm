#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr)
{
    vector<string> answer = strArr;

    for (int i = 0; i < answer.size(); i++)
    {
        if (i % 2)
        {
            for (char &c : answer[i])
                if ('a' <= c && 'z' >= c)
                    c -= 32;
        }
        else
        {
            for (char &c : answer[i])
                if ('A' <= c && 'Z' >= c)
                    c += 32;
        }
    }

    return answer;
}