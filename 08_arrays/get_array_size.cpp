#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << "Number of bytes in Numbers: "<< sizeof(myNumbers)<< endl;
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << "Array elements number : "<< getArrayLength << endl;

    string cars[5] = {"Volvoosdfuıomhbgvyujhgvkho", "BMW", "Ford", "Mazda", "Tesla"};
    cout << "Number of bytes in Cars: "<< sizeof(cars)<< endl;
    int getArrayLength2 = sizeof(cars) / sizeof(string);
    cout << "Array elements number : "<< getArrayLength2 << endl;
    // Average number of bytes per element
    cout << "Average number of bytes per element: " << sizeof(cars) / getArrayLength2 << endl;
    // Size of a single element in bytes
    cout << "Size of a cars[0] = " <<  sizeof(cars[0]) << endl;
    /*You can se than the size doesn't change when the string changed inside carsa because
    The sizeof operator applied to a std::string object will give you the size of 
    this structure, which is typically the size of the pointers and size 
    variables within the object. This size is fixed and does not depend
    on the length of the string it manages.
    
    class std::string {
    char* data;    // Pointer to the actual string data
    size_t size;   // Current length of the string
    size_t capacity; // Allocated memory size
    };

    */

    // let's find the size of the string in cars[0]
    cout << "Size of the string in cars[0] = " <<  cars[0].size();
    return 0;
}
