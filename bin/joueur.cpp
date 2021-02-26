#include <iostream>
#include "joueur.h"

using namespace std;

// Met en place un Joueur
joueur::joueur()
{
    nbJoueur += 1;
    m_nom = "Joueur";
    m_pion = '-';
    win = false;
}

// Attribus un Nom au joueur
void joueur::setNom()
{
    cout << "Nom du " << m_nom << " : ";
    cin >> m_nom;
}

// Attriibus un Pion au joueur
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
    cout << "Nombre de joueur : " << nbJoueur << endl;
}

void joueur::setWin(bool w)
{
    win = w;
}

void joueur::setFirst(bool f)
{
    first = f;
}

// GET
std::string joueur::getNom()
{
    return m_nom;
}

char joueur::getPion()
{
    return m_pion;
}

bool joueur::getWin()
{
    return win;
}

bool joueur::getFirst()
{
    return first;
}
// -------------



joueur::~joueur()
{

}