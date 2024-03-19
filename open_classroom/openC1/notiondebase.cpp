#include <iostream>

using namespace std;

int main(void)
{
    double euroUtilisateur(0);
    double const ratioDollar(1.20);

    cout << "Convertisseur euro -> dollar" << endl;

    cout << "Entrez un montant a convertir en dollar : ";
    cin >> euroUtilisateur;

    double resultat = euroUtilisateur * ratioDollar;
    
    if (euroUtilisateur < 0)
    {
        cout << "La saisie est incorrecte ! " << endl;
    }
    else
    {
        cout << euroUtilisateur << "€ equivaut a " << resultat << "$" << endl;
    }

}