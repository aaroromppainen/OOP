#include "pankkitili.h"
#include <iostream>
using namespace std;

//Pankkitili();
//Pankkitili(string);
//~Pankkitili();
//double getBalance();
//virtual bool deposit(double);
//virtual bool withdraw(double);


Pankkitili::Pankkitili()
{
    //cout << "olen pankkitili: default konstruktorissa!" << endl;

}

Pankkitili::Pankkitili(string om)
{
    //cout << "olen pankkitili: parametrikonstruktorissa!" << endl;
    omistaja = om;

}

double Pankkitili::getBalance()
{
    //cout << "olen saldokyselyssä!" << endl;
    return saldo;
}

bool Pankkitili::deposit(double sum)
{
    //cout << "olen Pankkitili: talletuksessa!" << endl;
    if (sum < 0) return false;
    saldo += sum;
    return true;
}


bool Pankkitili::withdraw(double sum)
{
    //cout << "olen Pankkitili: nostossa!" << endl;
    if ( (sum < 0 || ( (saldo - sum) < 0)) ) return false;
    saldo -= sum;
    return true;
}


