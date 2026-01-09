#include <iostream>
#include <ctime>
using namespace std;

/*
Arvotaan satunnainen luku
Kysytään pelaajalta arvaus
Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
*/
// funktion prototyypiy
int game(int maxnum);

int main()
{
    int lkm = game(40);
     cout << " arvausten lukumaara on " << lkm << endl;
   /* int arvaus = 0;
    int arvausten_lkm = 0;
    srand(time(NULL));
    int satunnaisluku = (rand() % 20) + 1;
    //cout << "satunnaisluku on " << satunnaisluku << endl;

     // Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    while (arvaus != satunnaisluku) {
        cout << "anna arvaus ? ";
        cin >> arvaus;
        //cout << " pelaajan arvaus on " << arvaus << endl;
        arvausten_lkm++;
        //cout << "lkm nyt " << arvausten_lkm << endl;
        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        // Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (arvaus == satunnaisluku){
            cout << " oikein !! Peli loppui " << endl;
            cout << " arvausten lukumaara on " << arvausten_lkm << endl;
        } else if (arvaus < satunnaisluku) {
            cout << " luku on suurempi" << endl;
        } else if (arvaus > satunnaisluku){
            cout << " luku on pienempi " << endl;
        }

    }

*/
    return 0;
}

int game(int maxnum) {
    int arvaus = 0;
    int arvausten_lkm = 0;
    srand(time(NULL));
    int satunnaisluku = (rand() % maxnum) + 1;
    //cout << "satunnaisluku on " << satunnaisluku << " maxnum on " << maxnum << endl;

    // Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    while (arvaus != satunnaisluku) {
        cout << "anna arvaus ? ";
        cin >> arvaus;
        //cout << " pelaajan arvaus on " << arvaus << endl;
        arvausten_lkm++;
        //cout << "lkm nyt " << arvausten_lkm << endl;
        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        // Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (arvaus == satunnaisluku){
            cout << " oikein !! Peli loppui " << endl;
        } else if (arvaus < satunnaisluku) {
            cout << " luku on suurempi" << endl;
        } else if (arvaus > satunnaisluku){
            cout << " luku on pienempi " << endl;
        }

    }

    return arvausten_lkm;

}
