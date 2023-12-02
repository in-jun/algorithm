#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
    vector<int> answer;

    if (k % 2)
        for (int n : arr)
            answer.push_back(n * k);
    else
        for (int n : arr)
            answer.push_back(n + k);

    return answer;
}