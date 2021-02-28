#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>

// CLASSE "JOUEUR"
class joueur
{
private:

    // Nom
    std::string m_nom;

    // Pion
    char m_pion;

    // A gagné
    bool win = false;

    // J1 ou J2
    bool first = false;

    // Nombre de joueur crée
    //static int nbJoueur;

public:
    joueur();

    // Fonction

    // Définie le Nom
    void setNom();

    // Définie le poin
    void setPion();

    // Définie s'il a gagner
    void setWin(bool w);

    // Définie s'il est premier a jouer
    void setFirst(bool f);

    // Montre les Statistique du joueur
    void stats();

    // GET

    // Renvoie Nom
    std::string getNom();
    
    // Renvoie le Pion
    char getPion();

    // Renvoie si il a gagner
    bool getWin();

    // Renvoie s'il est premier a jouer
    bool getFirst();

    ~joueur();
};

#endif // JOUEUR_H