#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial)
{
    stringstream ss(polynomial);

    int a = 0, b = 0;
    string str;

    while (ss >> str)
    {
        if (!ss)
        {
            break;
        }

        if (str == "+")
        {
            continue;
        }

        if (str.back() == 'x')
        {
            a += (1 < str.length() ? stoi(str.substr(0, str.length() - 1)) : 1);
        }
        else
        {
            b += stoi(str);
        }
    }

    string answer;
    if (0 < a && 0 < b)
    {
        answer = (a == 1 ? "" : to_string(a)) + "x + " + to_string(b);
    }
    else if (0 < a)
    {
        answer = (a == 1 ? "" : to_string(a)) + 'x';
    }
    else if (0 < b)
    {
        answer = to_string(b);
    }

    return answer;
}