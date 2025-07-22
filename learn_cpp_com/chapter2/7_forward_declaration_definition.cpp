#include <iostream>

using namespace std;
int add(int x, int y); // this is forward declare 

int main()
{
    cout << add(1, 2) << endl;
}

int add(int x, int y)
{
    return x + y;
}