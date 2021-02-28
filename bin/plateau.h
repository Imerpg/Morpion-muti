#ifndef PLATEAU_H
#define PLATEAU_H

#include "joueur.h"

class plateau
{
private:
    // Plateau de jeu
    char m_plateau[9];

public:
    plateau(/* args */);

    // Fonction

    // Initialize le plateau de jeu
    void initPlateau();

    // Verifie si le joueur selectionné a gagné
    void verifPlateau(joueur j);

    // Demande ou mettre le pion
    void setOnPlateau(joueur j);

    // Montre le plateau de jeu
    void showPlateau();

    ~plateau();
};

#endif // PLATEAU_H