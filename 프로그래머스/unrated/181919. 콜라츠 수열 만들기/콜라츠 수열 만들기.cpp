#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;
    answer.push_back(n);

    while (answer.back() != 1)
    {
        int x = answer.back();
        answer.push_back(x % 2 ? 3 * x + 1 : x / 2);
    }

    return answer;
}