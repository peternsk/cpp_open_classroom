/*      ecrire dans un fichier

    flux : comment on appelle le mode de communication d'un programme avec l'exterieur.

    besoin : #include <fstream>
*/

#include <iostream>
#include <fstream>

int main()
{
    //std::ofstream monflux("texte.txt");
    std::string const nomFichier("texte.txt");
    //Déclaration d'un flux permettant d'écrire dans le fichier
    // C:/Nanoc/scores.txt

    std::ofstream monFichier(nomFichier.c_str());
    return 0;
}