#ifndef GAMENEW_H
#define GAMENEW_H

class Gamenew
{
public:
    Gamenew();
    ~Gamenew();
    void play();
private:
    int maxNumber = 0;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
protected:

};

#endif // GAMENEW_H
