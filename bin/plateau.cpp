#include <iostream>
#include "plateau.h"

using namespace std;

plateau::plateau()
{
    initPlateau();
}

void plateau::initPlateau()
{
    // Initialisation du tableau de jeu
    for (int i = 0; i < 9; i++)
    {
        m_plateau[i] = '-';  
    }
}

void plateau::setOnPlateau()
{

}

void plateau::showPlateau()
{
    int nb = 0;
    // Affiche le tableau
    cout << "  0  1  2";
    for (int i = 0; i < 9; i++)
    {
        if(i == 3 || i == 6 || i == 0)
        {
            cout << endl;
            cout << nb;
            nb++;
        }
        cout << " " << m_plateau[i] << " ";
    }
    
}

plateau::~plateau()
{

}