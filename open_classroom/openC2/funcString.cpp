/*
    int, float, bool, double sont des types qui stockent des donner syple

    le type string est different des autres.
    string est un objet.

*/

#include <iostream>
#include <string>

/************************************************/
/**   Initialisez la chaîne a la déclaration   **/
/************************************************/

// int main(void)
// {
//     std::string maChaine("bonjour 42 quebec !");
//     std::cout << maChaine << std::endl;
//     maChaine = "bonjour 42 paris !"; // il est obligatoir d'utiliser = pour changer le contenu
//     std::cout << maChaine << std::endl;

//     //coller deux chaine de caracter
//     std::string chaine1("bonjour !");
//     std::string chaine2("comment ca va ?");
//     std::string chaine3;

//     chaine3 = chaine1 + " " + chaine2;
//     std::cout << chaine3 << std::endl;

//     //comparer deux chaine de caracter

//     if(chaine1 == chaine2){
//         std::cout << "chaine1 et chaine2 sont identique" << std::endl;
//     }else{
//         std::cout << "chaine1 et chaine2 sont differents" << std::endl;
//     }
//     return 0;
// }

/************************************************/
/**    Faites des opérations sur les  string   **/
/************************************************/

// int main(void)
// {
//     std::string chaine1("bonjour !");
//     std::cout << chaine1.size() << std::endl;

//     return 0;
// }

// int main(void)
// {
//     std::string chaine1("42 Quebec");
//     std::cout << "ma chaine contient : " << chaine1 << std::endl;
//     chaine1.erase();
//     std::cout << "et maintenant ma chaine contient : " << chaine1 << std::endl;

//     return 0;
// }

int main(void)
{
    std::string chaine("bonjour !");
    std::cout << chaine.substr(0, 3) << std::endl;
    std::cout << chaine[2] << std::endl;

    return 0;
}