#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";

    vector<pair<int, char>> arr;
    map<char, int> m{{'R', 0}, {'T', 0}, {'C', 0}, {'F', 0}, {'J', 0}, {'M', 0}, {'A', 0}, {'N', 0}};
    pair<char, char> p[4]{{'R', 'T'}, {'C', 'F'}, {'J', 'M'}, {'A', 'N'}};

    for (int i = 0; i < survey.size(); i++)
    {
        char first = survey[i][0];
        char second = survey[i][1];

        if (choices[i] < 4)
        {
            m[first] += 4 - choices[i];
        }
        else if (choices[i] > 4)
        {
            m[second] += choices[i] - 4;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (m[p[i].first] < m[p[i].second])
        {
            answer += p[i].second;
        }
        else if (m[p[i].first] > m[p[i].second])
        {
            answer += p[i].first;
        }
        else
        {
            answer += min(p[i].first, p[i].second);
        }
    }

    return answer;
}