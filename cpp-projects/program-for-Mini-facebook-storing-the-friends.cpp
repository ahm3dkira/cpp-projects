#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream MyFile;
    MyFile.open("friend.txt");
	MyFile<<"friend1"<<endl;
	MyFile<<"friend2"<<endl;
	MyFile<<"friend3"<<endl;
  MyFile<<"friend4"<<endl;
    MyFile.close();

	return 0;
}
