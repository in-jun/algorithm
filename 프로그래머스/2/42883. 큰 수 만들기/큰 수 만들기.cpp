#include <string>
#include <vector>

using namespace std;

string solution(string number, int k)
{
    string answer = number;
    for (int i = 0; i < answer.size() - 1; i++)
    {
        if ((answer[i] < answer[i + 1]) && k)
        {
            answer.erase(i, 1);
            k--;
            i = -1;
        }
    }

    return answer.substr(0, number.size() - k);
}