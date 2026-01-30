#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    /*cout << "Hello World!" << endl;

    Pankkitili pt1;
    Pankkitili pt2("Pete");
    Luottotili lt1;
    Luottotili lt2("Make", 500);
    pt2.deposit(100);
    pt2.withdraw(50);
    double luettusaldo = pt2.getBalance();
    cout << "Peten luettu saldo: " << luettusaldo << endl;
    lt2.withdraw(100);
    lt2.deposit(50);
    luettusaldo = lt2.getBalance();
    cout << "Maken luettusaldo: " << luettusaldo << endl;*/

    /*Pankkitili tili("testi");
    tili.deposit(1000);
    tili.withdraw(100);
    cout<<tili.getBalance()<<endl;
    Luottotili tili2("testi2", 500);
    tili2.withdraw(200);
    cout<<tili2.getBalance()<<endl;*/


    /*Asiakas Niklas("Niklas Pari", 1000);

    Niklas.showSaldo();
    Niklas.talletus(500);
    Niklas.showSaldo();
    Niklas.nosto(150);
    Niklas.showSaldo();
    Niklas.luotonNosto(100);
    Niklas.showSaldo();
    Niklas.luotonMaksu(100);
    Niklas.showSaldo();*/


    Asiakas Aaro("Aaro", 100);
    Asiakas Niilo("Niilo", 300);

    Aaro.showSaldo();
    Niilo.showSaldo();
    Aaro.talletus(600);
    Aaro.showSaldo();
    Aaro.tiliSiirto(600,Niilo);
    Aaro.showSaldo();
    Niilo.showSaldo();

    return 0;
}
