//A prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself.

#include <iostream>
#include <math.h> //sqrt function used from this library

using namespace std;

int main(){
// Variable Declaration 
int n;

// Get Input Value
 cout<<"Enter the Number : ";
 cin>>n;

cout <<"List Of Prime Numbers Below "<<n<<endl;

//for Loop Block For Find Prime Number 

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
