// g++ -std=c++23 -Wall -Wextra main.cpp -o prog
#include <iostream>
#include <memory>

/*
    unique_ptr //pointeur unique
        ** ptr.reset(); permet de liberer un pointeur a un moment voulu dans notre programme et s'il faut l'initialisé comme ptr.reset(nullptr/valeur)
        ** ptr1.swap(ptr2) permet de echanger le pointeur de deux pointeur 
        ** ptr2 { ptr1.release() } permet de transferer la propriété de ptr1 a ptr2 mais pas la copier car ptr1 n'existera plus si on essaye de l'utiliser il plente le programme 
        ****************************************************************
        std::unique_ptr<int> ptr { std::make_unique<int>(38)}; //initialisation dynamique en C++ 
        int a = 45;
        auto ptr1 {std::make_unique<int> (a)}; 
        std::cout<< "ptr correspond :"<< *ptr << std::endl;
        *ptr = 45;
        std::cout<< "ptr correspond :"<< *ptr << std::endl;

    shared_ptr //pointeur partager 
        //std::shared_ptr<int> <==> auto
        auto s_ptr1 {std::make_shared<int>(45)};
        auto s_ptr2 {s_ptr1};
        std::cout<< "*s_ptr1 correspond :"<< *s_ptr1 << std::endl;
        std::cout<< "*s_ptr2 correspond :"<< *s_ptr2 << std::endl; 

    weak_ptr //Pointeur faible n'as pas la propriété objet il doit etre converti en pointeur partager
        auto s_ptr1 {std::make_shared<int>(45)};
        std::weak_ptr<int> w_ptr { s_ptr1 };

        std::cout<< "*s_ptr1 correspond :"<< *s_ptr1 << std::endl;
        if( auto ob = w_ptr.lock()) //convertir w_ptr en pointeur partager 
            std::cout<< "*w_ptr correspond :"<< *ob << std::endl; 
        else
            std::cout<<"c'est pas possible" << std::endl;

*/

int main(){
    std::cout<< "Bonjour tous le monde" << std::endl;

    int a = 45;
    auto ptr1 {std::make_unique<int> (a)};
    auto ptr2 {std::make_unique<int> (38)};

    std::cout<< "ptr1 correspond :"<< *ptr1 << std::endl;
    std::cout<< "ptr2 correspond :"<< *ptr2 << std::endl;

    ptr1.swap(ptr2);

    std::cout<< "ptr1 correspond :"<< *ptr1 << std::endl;
    std::cout<< "ptr2 correspond :"<< *ptr2 << std::endl;
   
    return 0;
}

/*
    std::cout<< "n correspond :"<< n << std::endl;      //valeur de la variable
    std::cout<< "*pN correspond :"<< *pN << std::endl; //valeur de la variable pointer

    std::cout<< "pN correspond : "<< pN << std::endl; //l'adresse de la variable 
    std::cout<< "&n correspond :" << &n<< std::endl;  //l'adresse de la variable 

    std::cout<<"&pN correspond :" << &pN << std::endl;
    
*/