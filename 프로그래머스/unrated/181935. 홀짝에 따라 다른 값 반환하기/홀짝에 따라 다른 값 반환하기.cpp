#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    answer = (n % 2 ? (n / 2 + 1) * (n / 2 + 1) : (n * (n + 1) * (n + 2)) / 6);
    return answer;
}