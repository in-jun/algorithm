#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> answer(52, 0);

    for (char c : my_string)
        answer[c - (c >= 'A' && c <= 'Z' ? 'A' : 'G')]++;

    return answer;
}