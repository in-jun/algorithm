#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals)
{
    vector<int> answer;

    for (vector<int> v : intervals)
    {
        int a = v[0], b = v[1];

        for (int i = a; i <= b; i++)
            answer.push_back(arr[i]);
    }

    return answer;
}