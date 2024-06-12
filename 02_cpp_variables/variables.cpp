#include <iostream>
using namespace std;

int myNum = 15;  // Global variable
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

int x1 = 5;
int x2 = 6;

const int x = 5; // x will always be 5

int main(){
    cout << "Hello my num is : " << myNum << endl;
    cout << "Hello my float num is : " << myFloatNum << endl;
    cout << "Hello my letter is : " << myLetter << endl;
    cout << "Hello my text is : " << myText << endl;
    cout << "Hello my boolean is : " << myBoolean << endl;
    cout << "x1 + x2 = " << x1 + x2 << endl;
    return 0;

}
