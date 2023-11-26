#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;

    int start = 0, end = 0;

    while ((end = my_string.find('x', start)) != string::npos)
    {
        answer.push_back(my_string.substr(start, end - start));
        start = end + 1;
    }

    answer.push_back(my_string.substr(start));

    answer.erase(remove(answer.begin(), answer.end(), ""), answer.end());
    sort(answer.begin(), answer.end());

    return answer;
}