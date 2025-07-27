#include <iostream> // imports the declaration of std::count into the global scope

using namespace std; // this is a using-directive -> allows us to access name in
                     // std namespace without no namespace prefix

// All of the follwing statements are part of the global namespace

void foo(); // Ok: function forward declaration
int x;      // Ok: only declaration in the global scope
int y{5};   // Ok : variable declaration with initialization in the global scope
// x = 5; // error: you need to initialize the variable in the function body or
// the the time of declaration

int main() { // Ok: function definition
  std::cout << "Hello, World!" << std::endl;
  return 0;
}

void goo(); // Ok: A function forward definition
