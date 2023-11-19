#include <string>
#include <vector>

using namespace std;

string solution(string code)
{
    string answer = "";
    int mode = 0;
    for (int i = 0; i < code.length(); i++)
    {
        if (code[i] == '1')
            mode = !mode;
        else if (i % 2 == mode)
            answer += code[i];
    }
    return answer.length() ? answer : "EMPTY";
}
