/**************************************************************************
 * made by MrKira :)      												  *
 * https://github.com/MrKira128/cpp-projects     						  *  
 **************************************************************************
 * check whether a character is a VOWEL or CONSONANT					  *
 **************************************************************************/
#include <iostream>
using namespace std;

int main() 
{
    char ch ;
    cout << "Enter char: ";
    cin >>  ch ;
	
    switch(ch)
    {
        case 'a':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'e':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'i':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'o':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'u':
            cout << " You Enter a Vowel character"<<endl;
            break;
		case 'y':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'A':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'E':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'I':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'O':
            cout << " You Enter a Vowel character"<<endl;
            break;
        case 'U':
            cout << " You Enter a Vowel character"<<endl;
            break;
		case 'Y':
            cout << " You Enter a Vowel character"<<endl;
            break;
        default:
            cout << "You Enter a Consonant character"<<endl;
    }
    return 0;
}
