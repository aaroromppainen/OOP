#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <string>
#include "pankkitili.h"
using namespace std;

class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string, double);
    //~Luottotili();
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;

protected:
    double luottoraja = 0;


};

#endif // LUOTTOTILI_H
