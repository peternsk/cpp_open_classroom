/*
    type nomTableau[tailleX][tailleY]

                ou

    int const tailleX(taille);
    int const tailleY(taille);
    type nomTableau[tailleX][tailleY]
*/

#include <iostream>
#include <string>

int main(void)
{
    std::string nomUtilisateur("AAbbCCddE  EffGGhh  IIjjKK12345");
    int len = nomUtilisateur.length();
    int i = 0;

    while(i < len)
    {
        if(nomUtilisateur[i] >= 'a' && nomUtilisateur[i] <= 'z')
            nomUtilisateur[i] = nomUtilisateur[i] - 32;
        else if(nomUtilisateur[i] >= 'A' && nomUtilisateur[i] <= 'Z')
            nomUtilisateur[i] = nomUtilisateur[i] + 32;
        std::cout << nomUtilisateur[i];
        i++;
    }
}