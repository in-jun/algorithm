#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c)
{
    string answer = "";

    for (int i = c - 1; i < my_string.length(); i += m)
        answer += my_string[i];

    return answer;
}