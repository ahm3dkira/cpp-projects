#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the Age: ";
    cin >> age;

    if(age <18 )
        cout << "Not Eligible to Work" << endl;
    if(age <=60 )
        cout << "You are Eligible to Work and fill in your details and apply " << endl;
    if(age >60 )
        cout << "You are too old to work as per the Government rules" << endl;

    return 0;
}
