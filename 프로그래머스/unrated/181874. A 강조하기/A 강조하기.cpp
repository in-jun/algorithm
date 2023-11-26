#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = myString;

    for (char &c : answer)
        if ('a' <= c && 'z' >= c)
            c -= 32;

    for (char &c : answer)
        if ('A' <= c && 'Z' >= c && c != 'A')
            c += 32;

    return answer;
}