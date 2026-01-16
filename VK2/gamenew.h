#ifndef GAMENEW_H
#define GAMENEW_H

class GameNew
{
public:
    GameNew(int); //konstruktori
    ~GameNew(); // destruktori
    void play(); // tähän toteutetaan koko pelialgorytmi
    void printGameResult();
private:
    int maxNumber = 0; //suurin arvottava luku
    int playerGuess; //sen hetkinen arvaus
    int randomNumber = 0; //tähän tallennetaan satunnaisluku
    int numOfGuesses = 0; //laskee pelaajan arvauksia
protected:

};

#endif // GAMENEW_H
