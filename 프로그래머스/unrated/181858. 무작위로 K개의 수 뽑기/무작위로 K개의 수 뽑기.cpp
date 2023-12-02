#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
    vector<int> answer;
    set<int> s;

    for (int n : arr)
    {
        if (s.insert(n).second)
        {
            answer.push_back(n);
            if (answer.size() == k)
                break;
        }
    }

    answer.resize(k, -1);
    return answer;
}