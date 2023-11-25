#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix)
{
    for (int i = 0; i < my_string.length(); i++)
        if (is_prefix == my_string.substr(0, i))
            return 1;
    
    return 0;
}