#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int n : arr)
    {
        if (answer.size() && answer.back() == n)
            answer.pop_back();
        else
            answer.push_back(n);
    }

    if (answer.empty())
        return {-1};

    return answer;
}