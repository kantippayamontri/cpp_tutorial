#include <iostream>

using namespace std;

void doPrint()
{
    cout << "this is print" << endl;
}
void foo()
{
    cout << "this is foo" << endl;
}

int main()
{
    // cpp does not allow nested function
    // void foo(){
    //     cout << "this is foo" << endl;
    // }
    cout << "Starting main ..." << endl;
    foo();
    doPrint();
    doPrint();
    cout << "End main ..." << endl;
    return 0;
}