#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter value for a : ";
    cin >> a;
    cout << "Enter value for b : ";
    cin >> b;
    cout << endl;
    cout << "Before Swaping :";
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    c = b;
    b = a;
    a = c;
    cout << "After Swaping :";
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}