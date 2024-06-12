#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << "\n";
  /*
    Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

    Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

    Now, ptr holds the value of food's memory address.
    */

   // Dereference: Output the value of food with the pointer (Pizza)
  cout << *ptr << "\n";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  cout << "Change the value of the pointer" << endl;
   // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Hamburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}
