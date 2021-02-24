#ifndef PLATEAU_H
#define PLATEAU_H

class plateau
{
private:
    // Plateau de jeu
    char m_plateau[9];

public:
    plateau(/* args */);

    // Fonction
    void initPlateau();

    void setOnPlateau();

    void showPlateau();

    void verifPlateau();

    ~plateau();
};

#endif // PLATEAU_H