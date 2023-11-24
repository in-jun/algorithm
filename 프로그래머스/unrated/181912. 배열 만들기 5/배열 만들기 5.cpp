#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l)
{
    vector<int> answer;

    for (string str : intStrs)
    {
        int n = stoi(str.substr(s, l));

        if (n > k)
            answer.push_back(n);
    }

    return answer;
}