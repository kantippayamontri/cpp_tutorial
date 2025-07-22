#include <iostream>
using namespace std;
int main()
{
    // basic user input
    // cout << "Enter a number: ";
    // int num{};
    // cin >> num;
    // cout << "You entered: " << num << endl;

    // user input *BAD PRACTICE*
    /* this is bad example because if we want to use num in the later but num is changed already */
    // cout << "Enter a number: ";
    // int num{};
    // cin >> num;
    // cout << "Your number is " << num << endl;
    // num = num * 2;
    // cout << "Your double num is " << num << endl;

    // user input *BEST PRACTICE*
    /* you can still use num everywhere */
    cout << "Enter a number :" << endl;
    int num{};
    cin >> num;
    int doubleNum{num * 2}; // doubleNum is a copy value of num
    cout << "Your double num is " << doubleNum << endl;

    return 0;
}