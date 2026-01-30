#include "asiakas.h"
#include <iostream>
using namespace std;

/*Asiakas();
Asiakas(string, double);
string getNimi();
void showSaldo();
bool talletus(double);
bool nosto(double);
bool luotonMaksu(double);
bool luotonNosto(double);*/

Asiakas::Asiakas()
{
    //cout << "Asiakas: olen defaultkonstruktorissa" << endl;

}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    //cout << "Asiakas: olen parametrikonstruktorissa" << endl;
    nimi = name;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& vastaanottaja)
{
    if (sum <= 0) {
        cout << "ei voi olla negatiivinen" << endl;
        return false;
    }

    if (!kayttotili.withdraw(sum)) {
        cout << "Siirto epäonnistui. Olet koyha" << endl;
        return false;
    }

    if (!vastaanottaja.talletus(sum)) {
        cout << "Siirto epäonnistui" << endl;
        kayttotili.deposit(sum);
        return false;
    }

    cout << "Siirto onnistui! " << sum << "e asiakkaalta " << nimi
         << " asiakkaalle " << vastaanottaja.getNimi() << "." << endl;
    return true;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    //cout << "Käyttötilin saldo: " << kayttotili.getBalance() << endl;
    //cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
    kayttotili.deposit(sum);
    return kayttotili.deposit(sum);

}

bool Asiakas::nosto(double sum)
{
    kayttotili.withdraw(sum);
    return kayttotili.withdraw(sum);

}

bool Asiakas::luotonMaksu(double sum)
{
    luottotili.deposit(sum);
    return luottotili.deposit(sum);

}

bool Asiakas::luotonNosto(double sum)
{
    luottotili.withdraw(sum);
    return luottotili.withdraw(sum);
}





