#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef()
{
    //cout << "Olen Italiadefaultkonstruktorissa!" << endl;
}

ItalianChef::ItalianChef(string cN)
{
    //cout << "Olen Italiainputkonstruktorissa!" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{
    //cout << "Olen italiadefaultdestruktorissa" << endl;
}

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    if(pw.compare(password)==1) return false;
    water = amountOfWater;
    flour = amountOfFlour;

    int numberOfPizzas = makePizza();
    //if (pw != password) return false
    cout << "Saatiin tehtyä: " << numberOfPizzas << endl;
    return true;
}

int ItalianChef::makePizza()
{
    cout << "Tehdään pizzaa!" << "Italialaisella on " << "Jauhoja on: " << flour << "ja " << "vettä on: "<< water << endl;
    while(water/5 > flour/5){
        water--;
    };
    while(water/5 < flour/5){
        flour--;
    };

    int pizzalasku = (water/5 + flour/5)/2;

    cout << "Pizza voi tehdä: " << pizzalasku << endl;
    //tee tähän pizzan valmistus algoritmi
    //int numberOfPizzas

    return pizzalasku; //numberOfPizzas
}
