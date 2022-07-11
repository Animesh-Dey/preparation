#include <iostream>
using namespace std;

namespace n1
{

    int a = 12;
}
namespace n2
{
    int a = 10;

}
int main()
{

    // int a = 10;
    // int a = 20;  ***error occured****

    cout << "a of n1 : " << n1::a << endl;

    cout << "a of n2 : " << n2::a << endl;

    return 0;
}