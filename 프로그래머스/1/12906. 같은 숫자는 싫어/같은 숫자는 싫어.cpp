#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int temp = 10;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != temp)
        {
            answer.push_back(arr[i]);
            temp = arr[i];
        }
    }

    return answer;
}