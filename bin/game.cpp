#include <iostream>
#include "game.h"

using namespace std;

game::game(int wgame)
{
    whatGame(wgame);
}

// Demande le Game
void game::whatGame(int wgame)
{
    switch (wgame)
    {
    case 1:
        // Game classic (1 v 1 sur un ordi)
        JVJ();
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

// Game 1v1
void game::JVJ()
{

    int nb;

    j1.setNom();
    j1.setPion();
    j2.setNom();
    j2.setPion();

    randomPlayer(j1, j2);

    while(j1.getWin() == false && j2.getWin() == false)
    {
        j1.stats();
        TabP.setOnPlateau(j1);
        TabP.setOnPlateau(j2);
    }  
}

void game::randomPlayer(joueur j1, joueur j2)
{
    // Choose a random player to start
    int j = rand() % 1;

    if(j == 0)
    {
        j1.setFirst(true);
        j2.setFirst(false);
    } else if(j == 1) {
        j2.setFirst(true);
        j1.setFirst(false);
    }
}

void game::getShowTable()
{
    TabP.showPlateau();
}

game::~game()
{

}