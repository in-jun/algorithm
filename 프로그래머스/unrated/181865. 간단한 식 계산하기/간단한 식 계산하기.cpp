#include <string>
#include <vector>

using namespace std;

int solution(string binomial)
{
    int i = binomial.find_first_of("+-*");

    char op = binomial[i];
    int a = stoi(binomial.substr(0, i));
    int b = stoi(binomial.substr(i + 1));

    return (op == '+') ? a + b : ((op == '-') ? a - b : a * b);
}