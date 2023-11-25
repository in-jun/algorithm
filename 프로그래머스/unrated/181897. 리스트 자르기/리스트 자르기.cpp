#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list)
{
    vector<int> answer;

    int a = slicer[0], b = slicer[1], c = slicer[2];

    switch (n)
    {
    case 1:
        answer = {num_list.begin(), num_list.begin() + b + 1};
        break;
    case 2:
        answer = {num_list.begin() + a, num_list.end()};
        break;
    case 3:
        answer = {num_list.begin() + a, num_list.begin() + b + 1};
        break;
    case 4:
        for (int i = a; i <= b; i += c)
            answer.push_back(num_list[i]);
        break;
    }

    return answer;
}