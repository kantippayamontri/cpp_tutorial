#include <iostream>

using namespace std;

void doNothing(int &) {}

int main() {
  int x; // uninitialize variable -> variable had not been give the variable yet
  doNothing(x);
  cout << x << '\n';
  // int y;
  // cout << y << '\n';
  // int z;
  // cout << z << endl;
  return 0;
}
