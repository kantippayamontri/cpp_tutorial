// first c++ program

#include <iostream>  //contain the command like cin(input string) and cout(output string) commands.
using namespace std; // Namespace use for avoiding collision of similar functions name or variables name.

int main() // main function is the starting function of the c++ program. // return type is int, which means it returns an integer value.
{
    //--- body section ---
    std::cout << "Hello, this is Kan." << std::endl; // use with prefix std in front of cin and cout commands.
    cout << "Hello, this is Kan." << endl;           // Output the string to the console -> it is not necessary to use prefix std in front of cin and cout commands.
    return 0;                                        // return 0 as int type to indicate successful execution of the program.
}