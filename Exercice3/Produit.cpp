#include <iostream>
#include "Produit.hpp"

Produit::Produit(string n, double p)
    : nom(n), prix(p) {
}

void Produit::afficherInfos() const {
    cout << "Nom : " << nom << endl;
    cout << "Prix : " << prix << " DH" << endl;
}

Produit::~Produit() {
}



