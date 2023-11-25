#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix)
{
    for (int i = 0; i < my_string.length(); i++)
        if (is_suffix == my_string.substr(i))
            return 1;

    return 0;
}