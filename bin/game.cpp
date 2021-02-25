#include <iostream>
#include "game.h"

using namespace std;

game::game(int wgame)
{
    whatGame(wgame);
}

void game::whatGame(int wgame)
{
    switch (wgame)
    {
    case 1:
        // Game classic (1 v 1 sur un ordi)
        unVun();
        break;

    case 2:
        // Game 1 v Bot
    
        break;

    case 3:
        // Game 1 v 1 (2 ordi)

        break;

    default:
        // Si il marque autre chose
        cout << "ERREUR : Vous navez choisi aucun mode de jeu !" << endl;
        break;
    }
}

void game::unVun()
{

    int nb;

    j1.setNom();
    j1.setPion();
    j2.setNom();
    j2.setPion();

    randomPlayer(j1, j2);

    while(j1.win == false && j2.win == false)
    {
        TabP.setOnPlateau(j1);
        TabP.setOnPlateau(j2);

        j1.stats();

        j2.stats();
    }

    

    
}

void game::randomPlayer(joueur j1, joueur j2)
{
    // Choose a random player to start
    int j = rand() % 1;

    cout << j << endl;

    if(j == 0)
    {
        j1.first = true;
        j2.first = false;
    } else {
        j2.first = true;
        j1.first = false;
    }

    cout << j1.first << endl;
    cout << j2.first << endl;
}

game::~game()
{

}