#include <iostream>
#include "ProduitAlimentaire.hpp"

ProduitAlimentaire::ProduitAlimentaire(
    string n, double p, string date)
    : Produit(n, p), dateExpiration(date) {
}

void ProduitAlimentaire::afficherInfos() const {
    Produit::afficherInfos();
    cout << "Date d'expiration : " << dateExpiration << endl;
}
