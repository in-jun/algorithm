#include <string>
#include <vector>

using namespace std;

bool is_only05(int n)
{
    int temp;
    while (n)
    {
        temp = n % 10;
        if (temp != 0 && temp != 5)
            return false;
        n /= 10;
    }
    return true;
}

vector<int> solution(int l, int r)
{
    vector<int> answer;

    for (int i = l; i <= r; i++)
        if (is_only05(i))
            answer.push_back(i);

    if (!answer.size())
        answer.push_back(-1);

    return answer;
}