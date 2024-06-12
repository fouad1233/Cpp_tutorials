#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

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
