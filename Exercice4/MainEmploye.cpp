#include <iostream>
#include "Employe.hpp"
#include "Permanent.hpp"
#include "Contractuel.hpp"

using namespace std;

int main() {
    // Tableau dynamique de pointeurs vers Employe
    Employe** employes = new Employe*[3];

    // Création de différents types d'employés
    employes[0] = new Permanent(
        "Reda", 101, 6000, 12000
    );

    employes[1] = new Contractuel(
        "Hind", 102, 4000, 6, 100
    );

    employes[2] = new Permanent(
        "Youssef", 103, 7000, 15000
    );

    cout << " LISTE DES EMPLOYES " << endl;

    for (int i = 0; i < 3; i++) {
        employes[i]->afficherInfos();
        cout << "\n" << endl;
    }

    // Calcul du salaire mensuel du contractuel
    Contractuel* c =
        dynamic_cast<Contractuel*>(employes[1]);

    if (c != nullptr) {
        cout << "Salaire calcule de Hind : "
             << c->calculerSalaireMensuel(160)
             << " DH" << endl;
    }

    cout << "\n LIBERATION DE LA MEMOIRE " << endl;

    for (int i = 0; i < 3; i++) {
        delete employes[i];
    }

    delete[] employes;

    return 0;
}


