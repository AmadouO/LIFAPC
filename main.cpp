#include <iostream>

// g++ -std=c++23 -Wall -Wextra main.cpp -o prog
int main(){
    std::cout<< "Bonjour tous le monde" << std::endl;

    int n = 38;
    int *pN = &n;

    std::cout<< "n correspond :"<< n << std::endl;
    std::cout<< "*pN correspond :"<< *pN << std::endl;

    std::cout<< "pN correspond : "<< pN << std::endl;
    std::cout<< "&n correspond :" << &n<< std::endl;

    std::cout<<"&pN correspond :" << &pN << std::endl;






    return 0;
}