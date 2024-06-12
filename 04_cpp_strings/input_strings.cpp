#include <iostream> 
using namespace std;

int main(){
    //string fullName;
    //cout << "Type your full name: ";
    //cin >> fullName;
    //cout << "Your name is: " << fullName << endl;
    // The output will be the first word of the full name
    // to get the full name, use getline(cin, fullName);

    string fullName1;
    cout << "Type your full name: ";
    getline(cin, fullName1);
    cout << "Your name is: " << fullName1;



    return 0;
}