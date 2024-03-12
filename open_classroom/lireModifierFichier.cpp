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

    std::ofstream monFlux(nomFichier.c_str());
    if(monFlux)
        std::cout << "all good" << std::endl;
    else
        std::cout << "ERREUR : ouverture de fichier" << std::endl;

    //apres la verificartion on peu
    return 0;
}