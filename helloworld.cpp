#include <iostream>
#include <ctime>
int main()
{
int num;
int guess;
int tries;
srand(time(NULL));
num = (rand() % 100) + 1;
std::cout << "*****NUMBER GUESSING GAME*****\n";
do{
    std::cout << "Enter a guess between (1-100): ";
    std::cin >> guess;
    tries ++;

if(guess > num){
    std::cout << "Too High\n";
}
else if(guess < num){
    std::cout << "Too low\n";
}
else{
    std::cout << "YOU guessed correctly hurrayyyyyyy! # of tries: " << tries << '\n';
}

}while(guess != num);

std::cout << "************************************\n";
return 0;
}


