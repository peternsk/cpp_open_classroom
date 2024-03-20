/*      ecrire dans un fichier

    flux : comment on appelle le mode de communication d'un programme avec l'exterieur.

    besoin : #include <fstream>
*/

#include <iostream>
#include <fstream>
#include <string>

// int main()
// {
//     //std::ofstream monflux("texte.txt");
//     std::string const nomFichier("texte.txt");
//     //Déclaration d'un flux permettant d'écrire dans le fichier
//     // C:/Nanoc/scores.txt

//     std::ofstream monFlux(nomFichier.c_str());
//     if(monFlux)
//         std::cout << "all good" << std::endl;
//     else
//         std::cout << "ERREUR : ouverture de fichier" << std::endl;

//     //apres la verificartion on peu
//     return 0;
// }

// int main()
// {
//     std::string const myfile("text.txt");
//     std::ofstream monflux(myfile.c_str(), std::ios::app);

//     if(monflux){
//         monflux << "bonjour comment ca va" << std::endl;
//         monflux << 20.118 << std::endl;
//         monflux << "helloworld." << std::endl;
//         int age(29);
//         monflux << "j'ai " << age << " ans" << std::endl;
//         monflux << "comment on appelle le mode de communication d'un programme avec l'exterieur." << std::endl;
//     }
//     else{
//         std::cout << "ERREUR : impossible d'ouvrir le fichier." << std::endl;
//     }
// }

/******************************************/
/**      Different type d'ouverture      **/
/******************************************/

// pour ecrire a la fin d'un fichier il faut il faut specifer lors de louverture 
// ofstream monFlux(nomFichier.c_str(), ios::app);
// toute la section de mon if(monflux) se rajoute a la fin.



/******************************************/
/**           Lisez un fichier           **/
/******************************************/

// ofstream pour ecrire ==> ifstream pour lire

int main(void)
{
    std::ifstream fileToRead("text.txt");

    if(fileToRead){
        std::cout << "file open and ready for execution" << std::endl;
        std::string line;
        std::getline(fileToRead, line);
        std::cout << line << std::endl;
    }else{
        std::cout << "ERREUR : impossible d'ouvrir le fichier." << std::endl;
    }
}

/*      les trois manieres de lire un fichier

    getline();
    >>
    get();
*/