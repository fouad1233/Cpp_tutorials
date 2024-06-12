#include <iostream> 
using namespace std;

// Function prototype
string reverseString(string str);

int main(){
    string myString = "hello";
    cout << myString[0] << endl;
    string reversedString = reverseString(myString);
    cout << reversedString << endl;


    cout << "The first characketer " <<myString.at(0)<< endl;  // First character
    cout << "The second characketer " << myString.at(1)<< endl;  // Second character
    cout << "The third characketer " <<myString.at(myString.length() - 1) << endl;  // Last character

    myString.at(0) = 'J';
    cout << myString << endl;
    return 0;
}

string reverseString(string str){
    string reversedString = "";
    for(int i = str.length()-1; i >= 0; i--){
        reversedString += str[i];
    }
    return reversedString;
}