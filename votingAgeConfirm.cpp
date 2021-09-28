#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you are eligible for voting" << endl;
        cout << "Do VOTE Even if its NOTA";
    }
    else
    {
        cout << "You are noneligible for voting" << endl;
        cout << "Wait for " << (18 - age) * 365 * 34 * 60 * 60 << " seconds to vote" << endl;
    }
    return 0;
}
