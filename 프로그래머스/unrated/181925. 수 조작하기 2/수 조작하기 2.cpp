#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<int> numLog)
{
    string answer = "";

    map<int, char> m;
    m[1] = 'w';
    m[-1] = 's';
    m[10] = 'd';
    m[-10] = 'a';

    for (int i = 1; i < numLog.size(); i++)
        answer += m[numLog[i] - numLog[i - 1]];

    return answer;
}