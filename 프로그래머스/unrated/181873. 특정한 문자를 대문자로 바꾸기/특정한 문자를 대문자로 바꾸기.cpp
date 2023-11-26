#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp)
{
    string answer = my_string;

    for (char &c : answer)
        if (c == alp[0])
            c -= 32;

    return answer;
}