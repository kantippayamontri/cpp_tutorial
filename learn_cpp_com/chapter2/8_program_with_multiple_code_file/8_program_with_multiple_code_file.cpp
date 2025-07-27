#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * I want to use multiply function from multiply.cpp
 * concept is
 * 1. complie 8_program_with_multiply.cpp( -> 8_program_with_multiply.o) and
 * multiply.cpp(-> multiply.o) individul
 * 2. link the _program_with_multiply.o and multiply.o
 * 3. we can use multiply function from multiply.cpp
 *
 * Command:
 * 1. clang++ -std=c++17 -c ./learn_cpp_com/chapter2/multiply.cpp (compile
 * multiply.cpp -> get multiply.o)
 * 2. clang++ -std=c++17 -c
 * ./learn_cpp_com/chapter2/8_program_with_multiple_code_file.cpp (compile
 * 8_program_with_multiple_code_file.cpp ->
 * get_program_with_multiple_code_file.o)
 * 3. clang++ 8_program_with_multiple_code_file.o multiply.o -o main (link
 * _program_with_multiple_code_file.o and multiply.o together)
 * 4. ./main (run the program with use multiply() function from multiply.cpp)
 * */

int multiply(int x, int y);

int main() {
  cout << multiply(20, 30) << endl;
  return EXIT_SUCCESS;
}
