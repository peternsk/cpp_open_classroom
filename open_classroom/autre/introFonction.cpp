#include <iostream>
#include <string>

int ajoutDeux(int nombreRecu)
{
    int value(nombreRecu + 2);
    return value;
}

int addition(int a, int b)
{
    return(a+b);
}

std::string demanderNom()
{
    std::cout << "Entrez votre nom : ";
    std::string nom;
    std::getline(std::cin, nom);
    return nom;
}

void    direQuelqueChose()
{
    std::string mot;
    std::getline(std::cin, mot);
    std::cout << mot << std::endl;
}

/*__________________________________________________________*/



int main(int ac, char *av[])
{
    (void)ac;
    (void)av;

    int a(2);
    int b(2);
    std::string mot;
    std::cout << "Valeur de a " << a << std::endl;
    std::cout << "Valeur de b " << b << std::endl;
    b = ajoutDeux(a);
    std::cout << "Valeur de a " << a << std::endl;
    std::cout << "Valeur de b " << b << std::endl;
    std::cout << std::endl;
    std::string nomUtilisateur  = demanderNom();
    std::cout << nomUtilisateur << std::endl;
    direQuelqueChose();
}