#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
    for (char &c : myString)
        if ('A' <= c && 'Z' >= c)
            c += 32;

    for (char &c : pat)
        if ('A' <= c && 'Z' >= c)
            c += 32;

    return myString.find(pat) != string::npos;
}