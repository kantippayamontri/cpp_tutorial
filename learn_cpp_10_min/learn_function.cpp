#include <iostream>
using namespace std;
// this is a single line comments
/*
this is line 1
this is line 2
*/
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int first_number = 5, second_number = 10;
    cout << add(first_number, second_number) << endl;
}