
// A simple C++ program to compute sum 
// of series 1/1! - 1/2! + .. + 1/n!
#include <iostream>
#include <cmath>


int main()
{
    int n = 10;
    int f =1;
     double sum = 0;
     
    for (int i = 1; i <= n; i++){
    f *= i; 
    sum += pow(-1.0,i-1)/f;
    
    }
    std::cout<< sum;
   
    return 0;
}
