/************************************************/
/**              creez une classe              **/
/************************************************/

/* 
    on utilise le mot cle class losqu'on veut creer 
    une classe, suivi du nom de la class (commencant tjrs par  une MAJ)
*/
#include <iostream>
#include <string>

class Personnage
{
    //methodes
    public:
        void recevoirDegats(int nbDegats){

        }

        void attaquer(Personnage &cible){

        }

        void boirePotionDeVie(int quantitePotion){

        }

        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme){

        }

        bool estVivant(){

        }

    //attributs
    private:
        int m_vie;
        int m_mana;
        std::string m_nomArme;
        int m_degatArme;
};


int main(void)
{
    Personnage david, goliath;
    //creation de 2 objets de type Personnage : david et goliath

    goliath.m_vie = 90;
    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david recupere 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath attaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);

    return 0;
}

/************************************************/
/**        le principe d'encapsulation         **/
/************************************************/
/*
	l'encapsulation cest de mettre des attribut ou des membre en prive ou publique.
*/



