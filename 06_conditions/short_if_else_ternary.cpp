#include <iostream>
#include <string>
using namespace std;

int main() {
  int time = 13;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
  return 0;
}
