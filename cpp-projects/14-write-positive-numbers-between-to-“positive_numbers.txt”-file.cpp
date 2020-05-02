/*
Write C++ program that asks the user to enter two numbers then writes 
all positive numbers between those two numbers in a “positive_numbers.txt” file
*/
#include <iostream>     
#include <fstream>      

int main () {

  int a,b;
  std::cout << "Enter first number: ";
  std::cin>>a;    
  std::cout << "Enter second number: ";
  std::cin>>b;

  std::fstream file;
  file.open("positive_numbers.txt");    // open file
    if(a<b){
        a++;
        while(a!=b){
            if(a>0){
            std::cout<<a<<"\n";
            file<<a<<"\n";
            }
            a++;
        }
    }else if(a>b){
        b++;
        while(a!=b){
            if(b>0){
            std::cout<<b<<"\n";
            file<<b<<"\n";
            }
            b++;
        }
    }


  file.close();                // close file

  return 0;
}
