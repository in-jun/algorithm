#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    string answer = my_string;
    answer.replace(s, overwrite_string.length(), overwrite_string);
    return answer;
}