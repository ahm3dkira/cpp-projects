/**************************************************************************
 * made by MrKira :)      												  *
 * https://github.com/MrKira128/cpp-projects     						  *  
 **************************************************************************
 * distance between two points											  *
 **************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double x1,x2,y1,y2,n1,n2;

    cout << "enter the x1: ";
	cin >> x1;
	cout << "enter the y1: ";
	cin >> y1;
	cout << "enter the x2: ";
	cin >> x2;
	cout << "enter the y2: ";
	cin >> y2;
	n1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		if (n1 >= 0) {
			n2 = sqrt(n1);
			cout << "the distance= " << n2;
		}else
          cout << "error";
  return 0;
}
