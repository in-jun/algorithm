#include <vector>

using namespace std;

int solution(vector<int> arr)
{
    int answer = 0;

    while (true)
    {
        bool check = false;

        for (int &n : arr)
        {
            if (n >= 50 && !(n % 2))
                n /= 2, check = true;
            else if (n < 50 && n % 2)
                n = n * 2 + 1, check = true;
        }

        if (!check)
            break;

        answer++;
    }

    return answer;
}
