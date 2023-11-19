#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;
    answer = max(a * int(pow(10, int(log10(b) + 1))) + b, b * int(pow(10, int(log10(a) + 1))) + a);
    return answer;
}