#include <iostream>
using namespace std;

int main()
{
    int twitter = 10, threads = 10;

    if (twitter > threads)
    {
        cout << "Twitter WON!!!" << endl;
    }
    else if (twitter == threads)
    {
        cout << "Draw" << endl;
    }
    else
    {
        cout << "Threads WON!!!" << endl;
    }

    int number_of_like = 101;
    switch (number_of_like)
    {

    case 10:
        cout << "This is case 10" << endl;
        break;
    case 100:
        cout << "This is case 100" << endl;
        break;
    default:
        cout << "Not enough information." << endl;
        break;
    };
}