#include "Personnage.hpp"
#include <string>

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if(m_vie < 0){
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatArme);
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if(m_vie > 100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme){
	m_nomArme = nomNouvelleArme;
    m_degatArme = degatsNouvelleArme;
}