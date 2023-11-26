#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer = arr;

    for (int &n : answer)
    {
        if (n >= 50)
        {
            if (!(n % 2))
                n /= 2;
        }
        else if (n % 2)
            n *= 2;
    }

    return answer;
}