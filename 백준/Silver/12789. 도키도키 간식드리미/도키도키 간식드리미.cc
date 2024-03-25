#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v1.push_back(input);
    }

    int temp = 1;

    while (!v1.empty())
    {
        if (v1.front() == temp)
        {
            v1.erase(v1.begin());
            temp++;
        }
        else
        {
            v2.push_back(v1.front());
            v1.erase(v1.begin());
        }

        while (!v2.empty())
        {
            if (v2.back() == temp)
            {
                v2.pop_back();
                temp++;
            }
            else
            {
                break;
            }
        }
    }

    cout << ((v2.empty()) ? "Nice" : "Sad");
    return 0;
}