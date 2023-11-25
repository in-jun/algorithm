#include <string>
#include <vector>

using namespace std;

int solution(string number)
{
    int answer = 0;

    for (char n : number)
        answer += n - '0';

    answer %= 9;

    return answer;
}