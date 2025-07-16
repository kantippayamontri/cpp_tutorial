#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    // while loop -> check before run
    while (a < 5)
    {
        cout << "while: " << a << endl;
        a++;
    }

    // run first and then check -> useful when we want to run the block of code first.
    a = 0;
    do
    {
        cout << "do while: " << a << endl;
        a++;
    } while (a < 5);
}