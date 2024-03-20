#include "Personnage.hpp"
#include <string>

Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Epee rouillee"), m_degatArme(10)
{
    //Rien à mettre dans le corps du constructeur, tout a déjà été fait !
}

Personnage::Personnage(){
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Epee rouillee";
    m_degatArme = 10;
}

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

bool Personnage::estVivant(int parametre) const
{
    return m_vie > 0;
}