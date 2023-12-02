#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[i][j] != arr[j][i])
                return false;
    return true;
}