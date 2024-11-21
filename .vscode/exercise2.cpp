#include <iostream>

bool is_prime(int number)
{
    if (number <= 1){
        return false;
    }
    for(int i = 2; i < number; i++){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}

void print_primes(int upper_bound)
{
    for (int i = 0; i < upper_bound; i++)
    {
        if (is_prime(i))
        {
            std::cout << i << std::endl;
        }
    }
}

int main()
{

    int maximum_number;

    std::cout << "Please enter a number: ";
    std::cin >> maximum_number;
    std::cout << "Searching all primes until " << maximum_number << std::endl;
    print_primes(maximum_number);
    return 0;
}