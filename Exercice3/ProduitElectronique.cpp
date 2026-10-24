#include <iostream>
#include "ProduitElectronique.hpp"

ProduitElectronique::ProduitElectronique(
    string n, double p, int g)
    : Produit(n, p), garantie(g) {
}

void ProduitElectronique::afficherInfos() const {
    Produit::afficherInfos();
    cout << "Garantie : " << garantie << " ans" << endl;
}




