#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int ageUtilisateur(16);
	int	nombreAmis(432);
	int& cpyAgeUtilisateur(ageUtilisateur);

	// double pi(3.1416);

	bool estMonAmi(true);

	string nomUtilisateur("Peter Malonge Nsaka");

	// char lettre('c');

	if(estMonAmi == true){
		cout << "he is your friend" << endl;
	}
	cout << "your new friend is : " << nomUtilisateur << endl;
	cout << "you are now at : " << nombreAmis + 1 << endl;
	cout << cpyAgeUtilisateur << endl;
	return(0);
}