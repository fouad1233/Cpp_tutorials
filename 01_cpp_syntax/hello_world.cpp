#include <iostream>
// iostream is a header file that contains the declarations of the basic standard input-output library in C++.

int main() {
    // std::cout is used to print the output to the console
    // it means that the cout object is part of the std namespace
    // std is a namespace that contains the standard C++ library
    std::cout << "Hello World!";
    std::cout << "Iam learning C++!";

    //
    std::cout << "Hello World!\n"; // \n is used to print a newline character
    std::cout << "Iam learning C++!"<<"\n";

    std::cout << "Hello World!" << std::endl; // std::endl is used to print a newline character
    std::cout << "Iam learning C++!" << std::endl;

    //let's try tab
    std::cout << "Hello World!" << "\t" << "Iam learning C++!" << std::endl;
    //Inserts a backslash character (\)
    std::cout << "Hello World!" << "\\" << "Iam learning C++!" << std::endl;
    // Inserts a double quote character
    std::cout << "Hello World!" << "\"" << "Iam learning C++!" << std::endl << "\"";
    return 0;
}