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

void plateau::setOnPlateau(joueur j)
{
    int nb;
    bool good = false;

    while(good != true)
    {
        cout << "Quelle case ? (0-8)";
        cin >> nb;

        if (m_plateau[nb] == '-')
        {            
            m_plateau[nb] = j.m_pion;
        } else {
            good = true;
        }

        cout << good << endl;
    }
    
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