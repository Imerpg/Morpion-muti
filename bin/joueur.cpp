#include <iostream>
#include "joueur.h"

using namespace std;

// Met en place un Joueur
joueur::joueur()
{
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

// Definie s'il commence ou l'inverse
void joueur::setFirst()
{
    first = true;
}
void joueur::setLast()
{
    first = false;
}

void joueur::stats()
{
    cout << "Nom : " << m_nom << endl;
    cout << "Pion joué : " << m_pion << endl;
    cout << "Premier a jouer ? " << first << endl;
}

joueur::~joueur()
{

}