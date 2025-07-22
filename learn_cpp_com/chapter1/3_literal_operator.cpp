#include <iostream>

using namespace std;

int main()
{
  cout << 10 << endl; // print value of a literal
                      // 10, "Hello World" = literal, direct value inserted to
                      // the source code
  int x{5};
  cout << x << '\n'; // print value of a variable
  cout << (x = 12)
       << '\n'; // x is assigned new valude before print to the terminal

  int y{10};
  int z{y}; // z is a copy of y
  cout << "z is " << z << endl;
  z = 15;
  cout << "y is " << y << endl; // y is unchanged, z is a copy of y

  return 0;
}
