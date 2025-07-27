#include <iostream> // thie library provide std namespace that store standard library functions
using namespace std; // this is called using-directive, allows us to use the
// names in std namespace without using std namespace
// prefix

void cout() { // we have our cout function, which is not a good practice
  return;
}
int main() {
  cout << "Hello, World" << endl; // cout is an object of class ostream,
  // which is defined in the std namespace
  // error Compile error: one cout from std namespace and one cout from our own
  // function.
  return 0;
}

/*
 * Best Practice:
 *  [*] avoid using-directive in header files because you will get name conflicts in the future.
 * */
