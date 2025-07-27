#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * this file has MyFcn function and my_function.cpp also has MyFcn function
 * - when complied, No error because we need to complied the each file
 * separately(independent compilation)
 * - when liked, it will cause a name collision because both files have MyFcn
 * function in the same program. error because the same function name is defined
 * in the global scope how to fix this? -> use namespaces -> you can use the
 * same function name in different namespaces
 *
 * How to run:
 * 1. Compile both files separately:
 *      [1.1] clang++ -c 9_name_collisions_namespace.cpp (compilied this file)
 * -> got 9_name_collisions_namespace.o [1.2] clang++ -c my_function.cpp
 * (compilied my_function.cpp) -> got my_function.o
 * 2. Link both object files:
 *     [2.1] clang++ 9_name_collisions_namespace.o my_function.o -o my_program
 *     Note: You will get error: linker error: multiple definition of
 * `MyFcn(int)' X [2.2] ./my_program
 * */

// you can use the same function name in different namespaces

// the standard namespace contains the standard library functions in the std
// namspace for prevent naming conflicts with the user-defined functions

void MyFcn(int x) { cout << x * 3 << endl; }

int main() { return EXIT_SUCCESS; }
