#include <iostream>
using namespace std;

string check(int num)
{
    if (num % 2 == 0)
    {
        return "even number";
    }

    return "odd number";
}

int main()
{
    int num;
    cout << "Enter a number for check this number is even or odd : ";
    cin >> num;
    string returnValue = check(num);
    cout << returnValue;

    return 0;
}