/**************************************************************************
 * made by MrKira :)                                                      *
 * https://github.com/MrKira128/cpp-projects                              *
 *https://www.youtube.com/c/MrKira128                                     *
 **************************************************************************/

//A prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself.

#include <iostream>
#include <math.h> 
using namespace std;

int main(){
int n;
 cout<<"Enter the Number : ";
 cin>>n;
cout <<"List Of Prime Numbers Below "<<n<<endl;

for (int i=2; i<n; i++)
 for (int j=2; j*j<=i; j++)
 {
    if (i % j == 0)
    break;
    else if (j+1 > sqrt(i)) {
    cout << i << endl;
 }
} 
 return 0;
}
