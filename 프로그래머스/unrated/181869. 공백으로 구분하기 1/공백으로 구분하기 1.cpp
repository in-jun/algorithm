#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;
    int start = 0, end = 0;

    while ((end = my_string.find(' ', start)) != string::npos)
    {
        answer.push_back(my_string.substr(start, end - start));
        start = end + 1;
    }

    answer.push_back(my_string.substr(start));
    
    return answer;
}