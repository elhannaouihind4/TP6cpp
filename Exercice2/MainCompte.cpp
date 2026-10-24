#include <iostream>
#include "CompteEpargne.hpp"

using namespace std;

int main() {
    CompteEpargne c1("A231", 12000, 4);

    cout << " Etat initial " << endl;
    c1.afficher();

    cout << "\n Depot " << endl;
    c1.deposer(1000);
    c1.afficher();

    cout << "\n Retrait " << endl;
    c1.retirer(500);
    c1.afficher();

    cout << "\n Calcul des interets " << endl;
    cout << "Interets : "
         << c1.calculerInteret() << " DH" << endl;

    return 0;
}


