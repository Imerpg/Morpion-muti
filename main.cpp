#include <iostream>
#include "bin/game.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int nb;
    

    // Choose game
    cout << "1. 1 v 1 (sur un seul ordinateur)" << endl;
    cout << "2. 1 v BOT" << endl;
    cout << "3. 1 v 1 (en ligne en local)" << endl;

    cin >> nb;

    game test(nb);

    

    return 0;
}
