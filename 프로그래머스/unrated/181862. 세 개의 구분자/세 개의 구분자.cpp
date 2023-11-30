#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr)
{
    vector<string> answer;
    string str = "";

    for (char c : myStr)
    {
        if (c == 'a' || c == 'b' || c == 'c')
        {
            if (!str.empty())
                answer.push_back(str);
            str.clear();
        }
        else
            str += c;
    }

    if (str.length())
        answer.push_back(str);

    if (answer.empty())
        return {"EMPTY"};
    return answer;
}