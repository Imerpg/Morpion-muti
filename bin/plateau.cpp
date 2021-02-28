#include <iostream>
#include "plateau.h"

using namespace std;

// Constructeur
plateau::plateau()
{
    initPlateau();
}

// Initialisation du tableau de jeu
void plateau::initPlateau()
{
    for (int i = 0; i < 9; i++)
    {
        m_plateau[i] = '-';  
    }
}

// Verification du plateau
void plateau::verifPlateau(joueur j)
{
    bool w = true;
    if (m_plateau[0] == j.getPion())
    {
        if (m_plateau[1] == j.getPion())
        {
            if (m_plateau[2] == j.getPion())
            {
                j.setWin(w);
            }  
        }
        if (m_plateau[4] == j.getPion())
        {
            if (m_plateau[8] == j.getPion())
            {
                j.setWin(w);
            } 
        } 
        if (m_plateau[3] == j.getPion())
        {
            if (m_plateau[6] == j.getPion())
            {
                j.setWin(w);
            }
        }    
    }
    if (m_plateau[2] == j.getPion())
    {
        if (m_plateau[4] == j.getPion())
        {
            if (m_plateau[6] == j.getPion())
            {
                j.setWin(w);
            }
        }
        if (m_plateau[5] == j.getPion())
        {
            if (m_plateau[8] == j.getPion())
            {
                j.setWin(w);
            }
        }
    }
    if (m_plateau[3] == j.getPion())
    {
        if (m_plateau[4] == j.getPion())
        {
            if (m_plateau[5] == j.getPion())
            {
                j.setWin(w);
            }      
        }
    }

    cout << j.getWin() << endl;
    
}

// Met le pion du joueur
void plateau::setOnPlateau(joueur j)
{
    int nb;

    // Question
    cout << "A " << j.getNom() << " de jouer !" << endl;

    // Montre le plateau de jeu
    showPlateau();

    cout << "Quelle case ? (0-8) : ";
    cin >> nb;

    // Verifie la position sinon il relance la fonction
    if(m_plateau[nb] == '-')
    {
        m_plateau[nb] = j.getPion();
        verifPlateau(j);
    } else if(m_plateau[nb] != '-'){
        setOnPlateau(j);
    }
}

// Montre le plateau
void plateau::showPlateau()
{
    //int nb = 0;
    // Affiche le tableau
    for (int i = 0; i < 9; i++)
    {
        if(i == 3 || i == 6 || i == 0)
        {
            cout << endl;
            //cout << nb;
            //nb++;
        }
        cout << " " << m_plateau[i] << " ";
    }

    cout << endl;
    
}

plateau::~plateau()
{

}