#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr)
{
    int rows = arr.size(), cols = arr[0].size();

    if (rows > cols)
        for (vector<int> &row : arr)
            row.resize(rows, 0);
    else if (rows < cols)
        arr.resize(cols, vector<int>(cols, 0));

    return arr;
}