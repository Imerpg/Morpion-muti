#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>

class joueur
{
private:

    // Nom
    std::string m_nom;

    // Pion
    char m_pion;

    // A gagné
    bool win;

    // J1 ou J2
    bool first;

    // Nombre de joueur crée
    static int nbJoueur;

public:
    joueur(/* args */);

    // Fonction
    void setNom();

    void setPion();

    void setWin(bool w);

    void setFirst(bool f);

    void stats();

    // GET
    std::string getNom();

    char getPion();

    bool getWin();

    bool getFirst();

    ~joueur();
};

#endif // JOUEUR_H