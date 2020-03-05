#include <iostream>
using namespace std;
int max(int n1, int n2)
{
if (n1 > n2)
return n1;
return n2;
}
int main()
{
int x, y;
cout << "Enter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
cout << "The max = " << max(x, y) << endl;
return 0;
}