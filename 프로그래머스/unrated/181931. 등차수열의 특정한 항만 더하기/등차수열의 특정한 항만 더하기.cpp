#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included)
{
    int sum = a;
    int answer = 0;

    for (bool b : included)
    {
        answer += b * sum;
        sum += d;
    }

    return answer;
}