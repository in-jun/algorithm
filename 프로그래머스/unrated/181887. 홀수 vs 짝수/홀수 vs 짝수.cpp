#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int e = 0, o = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (i % 2)
            e += num_list[i];
        else
            o += num_list[i];
    }

    return max(e, o);
}