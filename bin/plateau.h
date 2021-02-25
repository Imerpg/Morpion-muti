#ifndef PLATEAU_H
#define PLATEAU_H

#include "joueur.h"

class plateau
{
public:
    // Plateau de jeu
    char m_plateau[9];

public:
    plateau(/* args */);

    // Fonction
    void initPlateau();

    void verifPlateau(joueur j);

    void setOnPlateau(joueur j);

    void showPlateau();

    void verifPlateau();

    ~plateau();
};

#endif // PLATEAU_H