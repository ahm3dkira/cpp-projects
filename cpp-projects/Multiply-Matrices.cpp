/**************************************************************************
 * made by MrKira :)                                                      *
 * github : https://github.com/MrKira128/cpp-projects                     *
 * youtube: https://www.youtube.com/c/MrKira128                           *
 **************************************************************************/
#include <iostream>  
using namespace std;
int main() {

	int x1, x2, x3,
		x4, x5, x6,
		x7, x8, x9;

	int y1, y2, y3,
		y4, y5, y6,
		y7, y8, y9;

	int n1, n2, n3,
		n4, n5, n6,
		n7, n8, n9;

	cout << "enter the first Matrices\n";
	cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8 >> x9;

	cout << "enter the second Matrices\n";
	cin >> y1 >> y2 >> y3 >> y4 >> y5 >> y6 >> y7 >> y8 >> y9;

	n1 = x1 * y1 + x2 * y4 + x3 * y7;
	n2 = x1 * y2 + x2 * y5 + x3 * y8;
	n3 = x1 * y3 + x2 * y6 + x3 * y9;
	n4 = x4 * y1 + x5 * y4 + x6 * y7;
	n5 = x4 * y2 + x5 * y5 + x6 * y8;
	n6 = x4 * y3 + x5 * y6 + x6 * y9;
	n7 = x7 * y1 + x8 * y4 + x9 * y7;
	n8 = x7 * y2 + x8 * y5 + x9 * y8;
	n9 = x7 * y3 + x8 * y6 + x9 * y9;

	cout << n1 << "  " << n2 << "  " << n3 << "\n";
	cout << n4 << "  " << n5 << "  " << n6 << "\n";
	cout << n7 << "  " << n8 << "  " << n9 << "\n";


	return 0;
}
