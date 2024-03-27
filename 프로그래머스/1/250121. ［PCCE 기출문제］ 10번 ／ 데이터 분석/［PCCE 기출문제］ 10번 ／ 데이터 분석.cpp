#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by)
{
    map<string, int> m{{"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3}};
    vector<vector<int>> answer;

    sort(data.begin(), data.end(), [m, sort_by](vector<int> a, vector<int> b)
         { return a.at(m.at(sort_by)) < b.at(m.at(sort_by)); });

    for (vector<int> v : data)
    {
        if (v.at(m.at(ext)) < val_ext)
        {
            answer.push_back(v);
        }
    }

    return answer;
}