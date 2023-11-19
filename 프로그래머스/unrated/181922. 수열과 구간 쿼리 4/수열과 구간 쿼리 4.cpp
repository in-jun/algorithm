#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer = arr;

    for (vector<int> qu : queries)
    {
        int s = qu[0], e = qu[1], k = qu[2];

        for (int i = s; i <= e; i++)
            if (!(i % k))
                answer[i]++;
    }

    return answer;
}