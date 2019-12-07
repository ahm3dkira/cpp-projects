#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream fold;
    ofstream fnew;
    fold.open("flod.txt");
    fnew.open("fnew.txt");
    int x;
    while(fold)
    {
        fold>>x;
        x+=25;
        fnew<<x;

    }

    fold.close();
    fnew.close();

    return 0;
}
