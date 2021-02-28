#ifndef GAME_H
#define GAME_H

#include "joueur.h"
#include "bot.h"
#include "plateau.h"

class game
{
private:
    // Joueur et Bot
    joueur j1;
    joueur j2;

    bot bot;

    // Plateau de jeu
    plateau TabP;

public:
    
    game(int whatGame);

    // Fonction
    void whatGame(int wgame);

    void JVJ();


    void randomPlayer(joueur j1, joueur j2);

    // DEV
    void getShowTable();

    ~game();
};

#endif // GAME_H