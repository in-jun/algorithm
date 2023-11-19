#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int e = 0, o = 0;
    for (int n : num_list)
    {
        if (n % 2)
            o = o * 10 + n;
        else
            e = e * 10 + n;
    }
    return e + o;
}