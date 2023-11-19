#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;
    answer = max(answer, a * int(pow(10, int(log10(b) + 1))) + b);
    answer = max(answer, 2 * a * b);
    return answer;
}