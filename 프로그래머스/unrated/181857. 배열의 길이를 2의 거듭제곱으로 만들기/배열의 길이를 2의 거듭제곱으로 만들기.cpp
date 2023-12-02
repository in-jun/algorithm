#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int n = 1;

    while (n < arr.size())
        n *= 2;

    arr.resize(n, 0);

    return arr;
}