#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int> answer = num_list;

    int a = num_list[num_list.size() - 2];
    int b = num_list[num_list.size() - 1];

    answer.push_back(a < b ? b - a : b * 2);
    return answer;
}