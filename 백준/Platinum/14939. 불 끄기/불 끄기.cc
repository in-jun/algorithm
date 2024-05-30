#include <iostream>
using std::cin;
using std::cout;
using std::min;

bool fixedState[10][10];
bool state[10][10];

void click(int x, int y)
{
    state[x][y] = !state[x][y];
    if (x > 0)
    {
        state[x - 1][y] = !state[x - 1][y];
    }
    if (x < 9)
    {
        state[x + 1][y] = !state[x + 1][y];
    }
    if (y > 0)
    {
        state[x][y - 1] = !state[x][y - 1];
    }
    if (y < 9)
    {
        state[x][y + 1] = !state[x][y + 1];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            char input;
            cin >> input;
            fixedState[i][j] = (input == 'O');
        }
    }

    int answer = 1024;
    for (int i = 0; i < 1024; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                state[j][k] = fixedState[j][k];
            }
        }

        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (i & (1 << j))
            {
                click(0, j);
                count++;
            }
        }

        for (int j = 1; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (state[j - 1][k])
                {
                    click(j, k);
                    count++;
                }
            }
        }

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (state[j][k])
                {
                    count = 1024;
                    break;
                }
            }
        }

        answer = min(answer, count);
    }

    if (answer == 1024)
    {
        cout << -1;
    }
    else
    {
        cout << answer;
    }
    return 0;
}