#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query)
{
    vector<int> answer = arr;
    for (int i = 0; i < query.size(); i++)
    {
        if (i % 2)
        {
            if (query[i] > 0)
                answer.erase(answer.begin(), answer.begin() + query[i]);
        }
        else
        {
            if (query[i] + 1 < answer.size())
                answer.erase(answer.begin() + query[i] + 1, answer.end());
        }
    }

    return answer;
}