#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

vector<int> parent;
vector<vector<int>> party;
vector<int> people;

int find(int a)
{
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}

void Union(int a, int b)
{
    a = find(a), b = find(b);
    if (a != b)
        parent[b] = a;
}

int main()
{
    int n, m, t;
    cin >> n >> m >> t;

    parent.resize(n + 1);
    party.resize(m);
    people.resize(t);

    for (int i = 0; i < t; i++)
        cin >> people[i];

    for (int i = 0; i < m; i++)
    {
        int size;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int input;
            cin >> input;
            party[i].push_back(input);
        }
    }

    for (int i = 0; i <= n; i++)
        parent[i] = i;

    for (int i = 0; i < m; i++)
    {
        int first = party[i][0];
        for (int j = 1; j < party[i].size(); j++)
            Union(first, party[i][j]);
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        count++;
        for (int j = 0; j < t; j++)
        {
            if (find(party[i][0]) == find(people[j]))
            {
                count--;
                break;
            }
        }
    }

    cout << count;
    return 0;
}