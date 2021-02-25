#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>

class joueur
{
public:

    // Nom
    std::string m_nom;

    // Pion
    char m_pion;

    // A gagné
    bool win;

    // J1 ou J2
    bool first;

public:
    joueur(/* args */);

    // Fonction
    void setNom();

    void setPion();

    void setFirst();
    void setLast();

    void stats();

    ~joueur();
};

#endif // JOUEUR_H