#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s;

    for (int n : nums)
        s.insert(n);

    return ((s.size() < nums.size() / 2) ? (s.size()) : (nums.size() / 2));
}