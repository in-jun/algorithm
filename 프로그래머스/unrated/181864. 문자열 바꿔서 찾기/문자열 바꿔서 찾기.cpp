#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat)
{
    for (char &c : myString)
    {
        if (c == 'A')
            c = 'B';
        else if (c == 'B')
            c = 'A';
    }
    return myString.find(pat) != string::npos;
}