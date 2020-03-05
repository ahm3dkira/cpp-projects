#include <iostream>

using namespace std;
int main(){
    double Tf,Tc;

    cout << "enter temperature in Celsius: ";
    cin >> Tc;
		//Tf = 9*Tc/5 + 32
		Tf = (9 * Tc) / 5 + 32;
    cout << "the temperature in Fahrenheit is: ";
		cout << Tf;
    
 return 0;
}
