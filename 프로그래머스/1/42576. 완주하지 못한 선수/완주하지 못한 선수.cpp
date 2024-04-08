#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    map<string, int> m;
    for (string p : participant)
    {
        m[p]++;
    }
    for (string c : completion)
    {
        m[c]--;
    }

    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (i->second > 0)
        {
            return i->first;
        }
    }

    return "";
}