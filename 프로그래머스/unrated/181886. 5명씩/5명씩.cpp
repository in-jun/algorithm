#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names)
{
    vector<string> answer;

    for (int i = 0; i < names.size(); i += 5)
        answer.push_back(names[i]);

    return answer;
}