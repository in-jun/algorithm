#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    answer = (n % 2 ? (n / 2 + 1) * (n / 2 + 1) : (n * n * n + 3 * n * n + 2 * n) / 6);
    return answer;
}