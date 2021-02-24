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

    cout << "Quel joueur commence ? ";
    cin >> nb;
    
}

game::~game()
{

}