#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e)
{
    string answer = my_string;

    reverse(answer.begin() + s, answer.begin() + e + 1);

    return answer;
}