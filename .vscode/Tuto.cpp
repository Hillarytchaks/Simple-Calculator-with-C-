#include <iostream>

std::string concatStrings(std::string string1, std::string string2);
int main()
{
    std::string firstName = "Hillary";
    std::string secondName = "Tchaks";
std::string FullName = concatStrings(firstName, secondName);

std::cout << "Hello " << FullName << '\n';
    return 0;
}
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}