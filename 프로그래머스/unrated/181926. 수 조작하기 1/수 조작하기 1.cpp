#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(int n, string control)
{
    int answer = n;

    map<char, int> m;
    m['w'] = 1;
    m['s'] = -1;
    m['d'] = 10;
    m['a'] = -10;

    for (char c : control)
        answer += m[c];

    return answer;
}