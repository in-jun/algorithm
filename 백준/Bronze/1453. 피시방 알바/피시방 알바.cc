#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(101, 0);

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (arr[input] == 0)
        {
            arr[input] = 1;
        }
        else
        {
            answer++;
        }
    }

    cout << answer;
    return 0;
}