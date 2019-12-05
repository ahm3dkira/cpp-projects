#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
	int a = 98, b = 56;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}

int gcd(int a, int b)
{
    while(a != b){
	if (a > b)
	a = a - b;
	else
	b = b - a;
    }
    return a;
}
