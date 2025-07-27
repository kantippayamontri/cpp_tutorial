#include <cstdlib>
#include <iostream>

using namespace std;
int add(int x, int y);  // this is forward declare -> this is called function
                        // prototype (declare only function name, parameter type
                        // and return type that does not have function body)
int add(int x, int y, int z);
int subtract(int, int);  // function prototype
/*
 * Best Practice
 * let parameter name in forward declaration to understand the parameter and
 * meaning of your function Note: it is okay to declare only type withou name
 * but Not recommend
 * */

int doMath(int first, int second, int third,
           int fourth);  // function declaration

int main() {
  cout << add(3, 4) << endl;
  cout << add(1, 2, 3) << endl;
  // subtract(2, 3); // error because subtract is declare but not found function
  // body
  return EXIT_SUCCESS;  // return 0;
}

int add(int x, int y) { return x + y; }
int add(int x, int y, int z) { return x + y + z; }
// No subtract function definition here
