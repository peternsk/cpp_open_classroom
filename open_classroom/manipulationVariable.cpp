#include <iostream>
#include <string>

using namespace std;

int main()
{
	int ageUtilisateur;
	string paysOrigine;

	cout << "Quel est votre age ? " << endl;

	cin >> ageUtilisateur;

	cout << "vous avez : " << ageUtilisateur << " ans" << endl;

	cout << "quelle est votre pays d'origine ? " << endl;

	cin >> paysOrigine;
	if(paysOrigine == "zambie")
		cout << "quel beau pays ! Lusaka est ma ville prefere !!" << endl;
	else
		cout << "Je reve de visiter la " << paysOrigine << " dites moi en plus svp !" << endl;

	return(0);
}
