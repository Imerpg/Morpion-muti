#ifndef GAME_H
#define GAME_H

#include "joueur.h"
#include "bot.h"
#include "plateau.h"

class game
{
public:
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

    void unVun();


    void randomPlayer(joueur j1, joueur j2);

    ~game();
};

#endif // GAME_H