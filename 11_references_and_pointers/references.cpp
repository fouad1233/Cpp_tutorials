#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  //Now, we can use either the variable name food or the reference name meal to refer to the food variable:



  cout << food << "\n";
  cout << meal << "\n";

  cout << &food << "\n";
  cout << &meal << "\n";

  string food1 = "Pizza";
  string meal1 = food1;
  // They have different memory addresses

  cout << food1 << "\n";
  cout << meal1 << "\n";

  cout << &food1 << "\n";
  cout << &meal1 << "\n";
  return 0;
}
