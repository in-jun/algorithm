#include <string>
#include <vector>

using namespace std;

string solution(string rny_string)
{
    string answer = "";

    for (char c : rny_string)
    {
        if (c == 'm')
            answer += "rn";
        else
            answer += c;
    }

    return answer;
}