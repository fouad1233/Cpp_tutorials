#include <iostream>

bool isOldEnoughToVote ;
int votingAge = 18;
int main() {
    int myAge;
    std::cout << "Enter your age: ";
    std:: cin >> myAge;
    isOldEnoughToVote = (myAge >= votingAge);
    if (isOldEnoughToVote) // this is a boolean expression
    {
        std::cout << "Old enough to vote!";
    } else {
        std::cout << "Not old enough to vote.";
    }
    return 0;
}
