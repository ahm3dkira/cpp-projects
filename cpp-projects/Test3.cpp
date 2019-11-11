

// A simple C++ program to compute sum 
// of series 1/1! + 1/2! + .. + 1/n!
#include <iostream>
#include <cmath>
using namespace std;
  
//  Utility function to find
int factorial(int n)
{
    int res = 1;
    for (int i=2; i<=n; i++)
       res *= i;
    return res;
}
  
// A Simple Function to return value of 1/1! + 1/2! + .. + 1/n!
double sum(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += pow(-1.0,i)/factorial(i);
    return sum;
}
  
// Driver program to test above functions
int main()
{
    int n = 100;
    cout << sum(n);
    return 0;
}
