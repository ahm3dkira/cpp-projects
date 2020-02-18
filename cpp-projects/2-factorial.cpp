/**************************************************************************
 * made by MrKira :)      												  *
 * https://github.com/MrKira128/cpp-projects     						  *
 **************************************************************************
 * factorial															  *
 **************************************************************************/

#include <iostream>
using namespace std;

long factorial(int);
long factorial2(int);

int main()
{
	int num=5;
    cout<< factorial(num);
    return 0;
}


long factorial(int n)
{
    int res = 1;
    for (int i=2; i<=n; i++)
       res *= i;
    return res;
}

long factorial2(int n)
{
	int res=1;

	while(n>=1){
		res*=n;
		n--;
	}
	return res;
}

