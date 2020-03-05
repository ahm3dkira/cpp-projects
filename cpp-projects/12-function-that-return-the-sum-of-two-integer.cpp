#include <iostream>
using namespace std;
int sum(int n1, int n2)
{
return n1 + n2;
}
int main()
{
int x, y;
cout << "Enter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
cout << "The sum = " << sum(x, y) << endl;
return 0;
}