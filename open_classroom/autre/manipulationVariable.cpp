#include <iostream>
#include <string>
using namespace std;

int main()
{
	int 	bonResultat(36);
	int 	resultUtilisateur;
	string 	nomUtilisater;

	cout << "quelle est votre nom et prenom" << endl;
	getline(cin, nomUtilisater);

	cout << "quelle est le resultat de l'opperation suivate : 3 x 12 ? " << endl;
	cin >> resultUtilisateur;

	if(resultUtilisateur == bonResultat)
		cout << "bravo ! " << bonResultat << " est la bonne reponse !" << endl;
	else if((resultUtilisateur - bonResultat == 1) || (resultUtilisateur - bonResultat == -1))
		cout << "tu es proche de la reponse" << endl;
	else
		cout << nomUtilisater << " tu es trop bete !" << endl;

	return 0;
}
