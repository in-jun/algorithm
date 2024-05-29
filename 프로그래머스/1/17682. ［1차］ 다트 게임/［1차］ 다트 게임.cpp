#include <string>

using namespace std;

int solution(string dartResult)
{
    int answer = 0;

    int score[3]{0, 0, 0};

    int index = 0;
    for (int i = 0; i < 3; i++)
    {
        if (dartResult[index] == '1' && dartResult[index + 1] == '0')
        {
            score[i] = 10;
            index += 2;
        }
        else
        {
            score[i] = dartResult[index] - '0';
            index++;
        }

        if (dartResult[index] == 'D')
        {
            score[i] = score[i] * score[i];
        }
        else if (dartResult[index] == 'T')
        {
            score[i] = score[i] * score[i] * score[i];
        }
        index++;

        if (dartResult[index] == '*')
        {
            if (i != 0)
            {
                score[i - 1] *= 2;
            }
            score[i] *= 2;
            index++;
        }
        else if (dartResult[index] == '#')
        {
            score[i] *= -1;
            index++;
        }
    }

    return score[0] + score[1] + score[2];
}