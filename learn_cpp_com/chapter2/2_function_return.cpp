#include <iostream>
#include <cstdlib> // provides 2 status -> EXIT_SUCCESS(0), EXIT_FAILURE(1),

using namespace std;
void getVoidUserInput()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    // return; // *Best practice -> remove this line as it is not needed
}

int getIntUserInput()
{
    int num;
    cin >> num;
    return num;
}

int returnFive()
{
    return 5;
}

int returnSeven()
{
    // c++ not allow nested function definition
    // int returnNine()
    // {
    //     return 9;
    // }
    return 7;
}

// int returnMain() {
//     return main(); // main cannot be called like this
// }

void printHi()
{
    cout << "Hi" << endl;
}

void printSTH()
{
    // return 5; // error -> cuz we try to print value in the void function
}

int main()
{
    getVoidUserInput();
    cout << returnFive() << endl;
    cout << returnFive() + 2 << endl;
    int num{returnFive()};
    cout << "Double Num is " << num * 2 << endl;
    cout << EXIT_SUCCESS + 1 << endl; // 0 + 1 = 1
    // returnMain(); // error as main cannot be called

    cout << "Enter two numbers : " << endl;
    // initialize variable with user input
    int user_input_1{getIntUserInput()};
    cout << "User 1 input is " << user_input_1 << endl;
    int user_input_2{getIntUserInput()};
    cout << "User 2 input is " << user_input_2 << endl;
    // cout << printHi() << endl; // error -> nothing to print

    return EXIT_SUCCESS;
}