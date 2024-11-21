#include<iostream>

int main(){

    std::string name = "Hillary";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    return 0;
}