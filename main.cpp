/*
By: Ahmed Kira
start in: 28/9/2019

*/
#include <iostream>
#include <cmath>
#include <math.h>
#include <limits>

using namespace std;

int x1, x2, x3, x4;
int y01, y2, y3, y4;
int n1, n2, n3;
int a, b, c;
char qu;
int ee = 0;

double _a, _b, _c;
int qqq;
int qa2;
//string yorns = "do you want to exit (y/n): ";


int yorn();

//Start of Logo function
void logo(){

	cout << "##############################################################################" << endl;
	cout << "#   ###    ###     ###############     ########              ####            #" << endl;
	cout << "#   ###   ###      ###############     #########            ### ###          #" << endl;
	cout << "#   ###  ###             ###           ###    ###          ###   ###         #" << endl;
	cout << "#   ### ###              ###           ###     ###        ###     ###        #" << endl;
	cout << "#   ######               ###           ###    ###         ###     ###        #" << endl;
	cout << "#   #####                ###           ########          #############       #" << endl;
	cout << "#   ######               ###           ######            #############       #" << endl; 
	cout << "#   ### ###              ###           ### ###          ###         ###      #" << endl;
	cout << "#   ###  ###             ###           ###  ###         ###         ###      #" << endl;
	cout << "#   ###   ###      ###############     ###   ###       ###           ###     #" << endl;
	cout << "#   ###    ###     ###############     ###    ###      ###           ###     #" << endl;
	cout << "##############################################################################" << endl;
	cout << "# By: Ahmed Kira                                                             #" << endl;
	cout << "# id: *****                                                                  #" << endl;
	cout << "##############################################################################" << endl;
	//cout << "" << endl;
}
//End of Logo function


//Start of Tools list
void toolstxt(){

	cout << "1- sum of two numbers" << endl;
	cout << "2- The product of multiplying two numbers" << endl;
	cout << "3- Average of three numbers" << endl;
	//cout << "4- hot/cold" << endl;
	//cout << "5- r*r*3.14 " << endl;
	//cout << "6- xxyy" << endl;
	//cout << "7- enter tc to get Tf" << endl;
	//cout << "8- enter tf to get Tc" << endl;
	//cout << "9- time" << endl;
	//cout << "10- rate " << endl;
	//cout << "11- /" << endl;
	//cout << "12- n/p" << endl;
	//cout << "13- bank basik" << endl;
	//cout << "14- " << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
}
//End of tools list


//Start of Tools function
void tools(){
        int ee2=0;
cin >> qqq;
while(!cin) // or if(cin.fail())
{
   // user didn't input a number
    cin.clear(); // reset failbit
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput
    ee2++;
    cout << "input value"<<endl;
    cin >> qqq;
}


	switch (qqq) {
		case 0:
					cout << "st number: ";
					cin >> n1;
				break;	
		case 1:
					cout << "enter the first number: ";
					cin >> n1;
					cout << "enter the second number: ";
					cin >> n2;
					cout << "the sum is: " << n1 + n2;
					//cout << "\n" << yorn; cin >> qu;
					//yorn();
				break;
		case 2:
					cout << "enter the first number: ";
					cin >> n1;
					cout << "enter the second number: ";
					cin >> n2;
					cout << "the * is: " << n1 * n2;
					//yorn();
					break;
		case 3:
					cout << "enter the first number: ";
					cin >> n1;
					cout << "enter the second number: ";
					cin >> n2;
					cout << "enter the 3 number: ";
					cin >> n3;
					cout << "the sum/3 is: " << (n1 + n2 + n1) / 3;
					//yorn();
					break;
		case 4:

					int t;
					cout << "enter the temperature: ";
					cin >> t;
					if (t > 30) {
						cout << "hot" << endl;
						//yorn();
					}
					else if (t < 18) {
						cout << "cold" << endl;
						//yorn();
					}
					else
						cout << "normal" << endl;
					//yorn();
					break;
		case 5:
					cout << "enter the first redias number: ";
					cin >> _a;
					cout << "the * is: " << (_a * _a * 3.14);
					//yorn();
					break;
				case 6:
					cout << "enter the x1: ";
					cin >> x1;
					cout << "enter the x2: ";
					cin >> x2;
					cout << "enter the y1: ";
					cin >> y01;
					cout << "enter the y2: ";
					cin >> y2;

					n1 = (x2 - x1) * (x2 - x1) + (y2 - y01) * (y2 - y01);

					if (n1 >= 0) {
						_b = sqrt(n1);

						cout << "the distance= " << _b;
						//yorn();

					}
					else
						cout << "error";
					//yorn();
					break;
				case 7:
					cout << "enter tc to get Tf: ";
					cin >> _b;
					//Tf = 9*Tc/5 + 32
					_a = (9 * _b) / 5 + 32;
					cout << n1;
					//yorn();
					break;



				case 8:
					cout << "enter tf to get Tc: ";
					cin >> _b;
					//Tf = 9*Tc/5 + 32
					//(tc-32)5/9
					_a = ((_b - 32) * 5) / 9;
					//yorn();
					break;

				case 9:
					cout << "enter d: ";
					cin >> _b;
					cout << "enter speed: ";
					cin >> _a;
					cout << "the time is: " << _b / _a;
					//yorn();
					break;

				case 10:
					cout << "enter hart rate: ";
					cin >> _b;
					if (_b == 70) {
						cout << "you are fine" << endl;
						//yorn();
					}
					else
						cout << "you are not fine" << endl;
					//yorn();
					break;
				case 11:
					cout << "enter x: ";
					cin >> _a;
					cout << "enter y: ";
					cin >> _b;
					if (_b == 0) {
						cout << "error" << endl;
						//yorn();
					}
					else
						cout << "x/y = " << _a / _b << endl;
					//yorn();
					break;

				case 12:
					cout << "enter x: ";
					cin >> _b;
					if (_b == 0) {
						cout << "0" << endl;
					}
					else if (_b < 0) {
						cout << "negative" << endl;
						//yorn();
					}
					else
						cout << "posative" << endl;
					//yorn();
					break;
				case 13:
					cout << "enter many: ";
					cin >> a;
					//cout << "enter y: ";
					//cin >> b;
					cout << "enter %: ";
					cin >> _a;
					cout << "enter f: ";
					cin >> _b;

					_c = a + a * _a;

					if (a >= 1000) {
						cout << "your many is: " << _c - _b << endl;
						//yorn();
					}
					else
						cout << "your many is: " << _c << endl;
					//yorn();
					break;

				case 14:
					cout << "enter the first number: ";
					cin >> n1;
					cout << "enter the second number: ";
					cin >> n2;
					if (n1 == n2) { cout << n1 << endl; }
					else
						while (n1 != n2)
						{
							while (n1 > n2)
							{
								n1 = n1 - n2;
							}
							while (n1 < n2)
							{
								n2 = n2 - n1;
							}
						}cout << n1 << endl;

					break;

				case 15:
					cout << "ffffffffffffffff ";

					break;


				default:
					//yorn();
					cout << "error";
					//cin >> qu;
					//std::cin >> n1;

				}
				//yorn();
			}
//End of Tools function
int yorn()
{

	cout << "\n" << "do you want to exit (y/n): ";
	cin >> qu;
	if (qu == 'n' && ee <= 3)
	{
		ee = 0;
		
		logo();
		toolstxt();
		tools();

		yorn();

	}
	else if (qu != 'y' && ee <= 3){
		ee++;
		yorn();
	}

		//cout << "bay";

	return 0;
}



int main(){

    logo();
    toolstxt();
    tools();
		yorn();




	return 0;
}

