/******************************************/
/**          afficher l'addresse         **/
/******************************************/

#include <iostream>
#include <string>
#include <vector>

// int main(void)
// {
//     int a(5);
//     int *ptr(0);

//     ptr = &a;

//     std::cout << "addresse de a " << &a << std::endl;
//     std::cout << "valeur de a " << a << std::endl;
//     std::cout << "addresse de ptr " << &ptr << std::endl;
//     std::cout << "valeur de ptr " << ptr << std::endl;
//     std::cout << "valeur pointee " << *ptr << std::endl;

//     return 0;
// }

/******************************************/
/**        allocation de memoire         **/
/******************************************/

// new    : pour allouer
// delete : pour liberer remetre le pointeur a (0) 

int main(void)
{
    double* pointeur(0);
    pointeur = new double;
    if(pointeur){
        std::cout << pointeur << std::endl;
        *pointeur = 10.5;
        std::cout << *pointeur << std::endl;
        delete pointeur;
        pointeur = 0;
    }else{
        std::cout << "allocation error" << std::endl;
    }
    return 0;
}

/*  pourquoi utiliser un pointeur

    1.Gérer soi-même le moment de la création et de la destruction des cases mémoire.
    2.Partager une variable dans plusieurs morceaux du code.
    3.Sélectionner une valeur parmi plusieurs options.

*/