#include <iostream>
using namespace std;

void doPrint()
{
}

void printValue(int x)
{
    cout << "Your value " << x << endl;
}

int add(int x, int y)
{
    // x and y is pass by value -> if x or y is change -> not effect the real variable
    int sum = x + y;
    return sum;
}

int plusOne(int x)
{
    x = x + 1;
    return x;
}

int plusOneReference(int &x) // pass by reference
{
    x = x + 1; // real x is change by plus one
    return x;
}

void doSomething(int) // unnamed parameter -> argument that requred but not used you can use int
{
}

void doSomethingTwo(int, int) // 2 unnamed parameters
{
}

int main()
{
    doPrint();      // no argument
    printValue(99); // 99 is argument
    printValue(11); // 11 is argument
    add(11, 12);    // 11 and 12 is argument

    int three{3};
    int five{5};
    cout
        << " 3 + 5 is " << add(three, five) << endl;

    cout << three << " plus one is " << plusOne(three) << endl;
    plusOneReference(three); // three is now 4 (pass by reference)
    cout << "" << endl;

    doSomething(1);
    doSomethingTwo(1, 2);

    return 0;
    // return 0 = success
    // return 1 = fail
}