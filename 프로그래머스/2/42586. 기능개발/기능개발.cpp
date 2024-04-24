#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;

    for (int i = 0; i < progresses.size(); i++)
    {
        days.push_back((100 - progresses[i]) / speeds[i] + !!((100 - progresses[i]) % speeds[i]));
    }

    int max = days[0];
    int count = 1;
    for (int i = 1; i < days.size(); i++)
    {
        if (max >= days[i])
        {
            count++;
        }
        else
        {
            answer.push_back(count);
            count = 1;
            max = days[i];
        }
    }
    answer.push_back(count);

    return answer;
}