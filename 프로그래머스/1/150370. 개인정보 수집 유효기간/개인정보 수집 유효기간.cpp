#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    map<char, int> termMap;
    vector<int> answer;

    for (int i = 0; i < terms.size(); i++)
        termMap[terms[i][0]] = stoi(terms[i].substr(1));

    int nowDay = stoi(today.substr(0, 4)) * 336 + stoi(today.substr(5, 2)) * 28 + stoi(today.substr(8, 2));

    for (int i = 0; i < privacies.size(); i++)
    {
        int year = stoi(privacies[i].substr(0, 4));
        int month = stoi(privacies[i].substr(5, 2)) + termMap[privacies[i][11]];
        int day = stoi(privacies[i].substr(8, 2));

        if ((year * 336 + month * 28 + day) <= nowDay)
            answer.push_back(i + 1);
    }

    return answer;
}