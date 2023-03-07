#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double w, h, bmi;
    cin >> w >> h;
    bmi = w / (h * h);
    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi >= 18.5 && bmi < 25)
        cout << "Normal weight";
    else
        cout << "Overweight";
    return 0;
}