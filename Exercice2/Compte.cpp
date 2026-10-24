#include <iostream>
#include "Compte.hpp"

Compte::Compte(string num, double s)
    : numero(num), solde(s) {
}

void Compte::deposer(double montant) {
    if (montant > 0) {
        solde += montant;
        cout << "Depot de " << montant << " DH effectue." << endl;
    } else {
        cout << "Montant invalide !" << endl;
    }
}

void Compte::retirer(double montant) {
    if (montant <= 0) {
        cout << "Montant invalide !" << endl;
    } else if (montant > solde) {
        cout << "Solde insuffisant !" << endl;
    } else {
        solde -= montant;
        cout << "Retrait de " << montant << " DH effectue." << endl;
    }
}

void Compte::afficher() const {
    cout << "Numero du compte : " << numero << endl;
    cout << "Solde : " << solde << " DH" << endl;
}




