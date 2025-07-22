#include <iostream>
using namespace std;
/*
variable that define inside function body = local variable
*/

int add(int x, int y) // x and y are created and enter scope here
// function parameters x and y are local variable
{
    // x and y are usuable only within add() function
    int z{x + y}; // z is a local variable
} // x and y go out of scope and are destroyed here

int main()
{
    int a {5}; // a is created, initialized and enter the scoped here
    int b {6}; // b is created, initialized and enter the scoped here

    // a and b are usuable only within main() function
    cout << add(a,b) << '\n'; // calls add(5,6), where x=5 and y=6

    return 0;
} // a and b go out of scope and are destroyed here.