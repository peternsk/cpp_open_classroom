#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// int main()
// {
// 	int 	bonResultat(36);
// 	int 	resultUtilisateur(0);
// 	string 	nomUtilisater;

// 	cout << "quelle est votre nom et prenom" << endl;
// 	getline(cin, nomUtilisater);

// 	cout << "Bonjour " << nomUtilisater << endl;
//     while(resultUtilisateur != bonResultat)
//     {
//         cout << "quelle est le resultat de l'opperation suivate : 3 x 12 ? " << endl;
// 	    cin >> resultUtilisateur;
// 	    if(resultUtilisateur == bonResultat)
//         {
//     		cout << "bravo ! " << bonResultat << " est la bonne reponse !" << endl;
//             return(0);
//         }
// 	    else if((resultUtilisateur - bonResultat == 1) || (resultUtilisateur - bonResultat == -1))
//     		cout << "tu es proche de la reponse" << " essaie de nouveau" <<endl;
// 	    else
//     		cout << nomUtilisater << " tu es trop bete  essaie de nouveau !" << endl;
//     }
// 	return 0;
// }

int main(void)
{
    for(int compteur(1); compteur <= 10; compteur++){
        cout << compteur << endl;
    }
    // cout << compteur << endl; le compteur n'existe que dans la for loop


    return 0;
}