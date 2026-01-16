#include "gamenew.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



GameNew::GameNew(int mN)
{
    //cout << "peli luotu" << endl;
    maxNumber = mN;

}

GameNew::~GameNew()
{
    //cout << "peli tuhottu" << endl;
}

void GameNew::play()
{
    //srand(std::time(0));
    //randomNumber = (rand()%maxNumber)+1;
    //cout << "maxNumber: " << maxNumber << endl << "randomNumber: " << randomNumber << endl;

    //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    srand(time(NULL));
    randomNumber = (rand() % maxNumber) + 1;
    //cout << "satunnaisluku on " << satunnaisluku << " maxnum on " << maxnum << endl;

    // Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    while (playerGuess != randomNumber) {
        cout << "anna arvaus ? ";
        cin >> playerGuess;
        //cout << " pelaajan arvaus on " << arvaus << endl;
        numOfGuesses++;
        //cout << "lkm nyt " << arvausten_lkm << endl;
        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        // Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (playerGuess == randomNumber){
            cout << " oikein !! Peli loppui " << endl;
        } else if (playerGuess < randomNumber) {
            cout << " luku on suurempi" << endl;
        } else if (playerGuess > randomNumber){
            cout << " luku on pienempi " << endl;


}
    }
}

void GameNew::printGameResult()
{
    //cout << "Tulostuksessa" << endl;
    cout << "Oikea luku: " << randomNumber << endl << "Arvausten määrä: " << numOfGuesses << endl;
}
