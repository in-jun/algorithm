#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    int a = denom1 * denom2;
    int b = denom1 * numer2 + denom2 * numer1;

    for (int i = 2; i <= a; i++)
        if (!(a % i) && !(b % i))
            a /= i, b /= i, i = 1;

    return {b, a};
}