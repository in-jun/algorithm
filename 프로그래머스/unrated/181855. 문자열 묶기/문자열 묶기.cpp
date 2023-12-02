#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr)
{
    int answer = 0;
    int arr[31]{0};

    for (string str : strArr)
        answer = max(answer, ++arr[str.length()]);

    return answer;
}