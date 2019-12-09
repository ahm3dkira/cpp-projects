/**************************************************************************
 * made by MrKira :)                                                      *
 * https://github.com/MrKira128/cpp-projects                              *
 **************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

//using namespace std;

int main()
{

    std::ifstream fold;
    fold.open("cpp-projects/1.cpp");
    std::string x;
    while(fold)
    {
        getline(fold, x);
        std::cout <<x<<std::endl;

    }
    fold.close();

    return 0;
}
