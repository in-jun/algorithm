#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    for (vector<int> qu : queries)
    {
        int s = qu[0], e = qu[1], k = qu[2];
        int m = 2147483647;

        for (int i = s; i <= e; i++)
            if (arr[i] > k)
                m = min(arr[i], m);

        answer.push_back(m == 2147483647 ? -1 : m);
    }

    return answer;
}