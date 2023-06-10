#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::make_pair;
using std::pair;
using std::queue;

int now[3];
bool visited[201][201];
bool ans[201];

int sender[6]{0, 0, 1, 1, 2, 2};
int receiver[6]{1, 2, 0, 2, 0, 1};

void bfs()
{
	visited[0][0] = true;
	ans[now[2]] = true;
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));

	while (q.size())
	{
		int a = q.front().first;
		int b = q.front().second;
		int c = now[2] - a - b;
		q.pop();

		for (int i = 0; i < 6; i++)
		{
			int next[3]{a, b, c};

			next[receiver[i]] += next[sender[i]];
			next[sender[i]] = 0;

			if (now[receiver[i]] < next[receiver[i]])
			{
				next[sender[i]] = next[receiver[i]] - now[receiver[i]];
				next[receiver[i]] = now[receiver[i]];
			}

			if (!visited[next[0]][next[1]])
			{
				visited[next[0]][next[1]] = true;
				q.push(make_pair(next[0], next[1]));
				if (!next[0])
					ans[next[2]] = true;
			}
		}
	}
}

int main()
{
	cin >> now[0] >> now[1] >> now[2];

	bfs();

	for (int i = 0; i < 201; i++)
		if (ans[i])
			cout << i << ' ';
	return 0;
}