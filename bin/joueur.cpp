#include <iostream>
#include "joueur.h"

using namespace std;

// Met en place un Joueur
joueur::joueur()
{
    //nbJoueur += 1;
    m_nom = "Joueur";
    m_pion = '-';
}

// Attribus un Nom au joueur
void joueur::setNom()
{
    cout << "Nom du " << m_nom << " : ";
    cin >> m_nom;
}

// Attribus un Pion au joueur
void joueur::setPion()
{
    cout << "Quel pion voulez vous joué ? (A-Z) : ";
    cin >> m_pion;
}

// Stat du joueur (DEV)
void joueur::stats()
{
    cout << "Nom : " << m_nom << endl;
    cout << "Pion joué : " << m_pion << endl;
    cout << "Premier a jouer ? " << getFirst() << endl;
    cout << "Win : " << getWin() << endl;
    //cout << "Nombre de joueur : " << nbJoueur << endl;
}

// Met le joueur gagnant
void joueur::setWin(bool w)
{
    win = w;
}

// Met le joueur qui commence la partie
void joueur::setFirst(bool f)
{
    first = f;
}

// GET

// Renvoie le Nom
std::string joueur::getNom()
{
    return m_nom;
}

// Renvoie le pion
char joueur::getPion()
{
    return m_pion;
}

// Renvoie si il a gagner
bool joueur::getWin()
{
    return win;
}

// Renvoie si il est premier 
bool joueur::getFirst()
{
    return first;
}
// -------------



joueur::~joueur()
{

}