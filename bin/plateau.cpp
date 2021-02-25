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

void plateau::verifPlateau(joueur j)
{
    if (m_plateau[0] == j.m_pion)
    {
        if (m_plateau[1] == j.m_pion)
        {
            if (m_plateau[2] == j.m_pion)
            {
                j.win = true;
            }  
        }
        if (m_plateau[4] == j.m_pion)
        {
            if (m_plateau[8] == j.m_pion)
            {
                j.win = true;
            } 
        } 
        if (m_plateau[3] == j.m_pion)
        {
            if (m_plateau[6] == j.m_pion)
            {
                j.win = true;
            }
        }    
    }
    if (m_plateau[2] == j.m_pion)
    {
        if (m_plateau[4] == j.m_pion)
        {
            if (m_plateau[6] == j.m_pion)
            {
                j.win = true;
            }
        }
        if (m_plateau[5] == j.m_pion)
        {
            if (m_plateau[8] == j.m_pion)
            {
                j.win = true;
            }
        }
    }
    if (m_plateau[3] == j.m_pion)
    {
        if (m_plateau[4] == j.m_pion)
        {
            if (m_plateau[5] == j.m_pion)
            {
                j.win = true;
            }      
        }
    }
    
}

void plateau::setOnPlateau(joueur j)
{
    int nb;

    // Question
    cout << "A " << j.m_nom << " de jouer !" << endl;

    showPlateau();

    cout << "Quelle case ? (0-8) : ";
    cin >> nb;

    // Verifie la position
    if(m_plateau[nb] == '-')
    {
        m_plateau[nb] = j.m_pion;
    } else if(m_plateau[nb] != '-'){
        setOnPlateau(j);
    }
    verifPlateau(j);
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
    cout << endl;
    
}

plateau::~plateau()
{

}