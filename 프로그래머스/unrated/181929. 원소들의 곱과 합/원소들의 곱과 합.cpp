#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int sum = 0, product = 1;
    for (int n : num_list)
        sum += n, product *= n;
    return product < sum * sum;
}