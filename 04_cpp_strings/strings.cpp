#include <iostream>
using namespace std;

string greeting = "Hello";

string firstName = "John";
string lastName = "Doe";

int main() {
    
    cout << greeting << endl;
    string fullName = firstName +" "+ lastName;
    cout << fullName << endl;
    fullName = firstName.append(lastName);
    cout << fullName;

    return 0;
}
