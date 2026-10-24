#include <iostream>
#include "CompteEpargne.hpp"

CompteEpargne::CompteEpargne(string num, double s, double taux)
    : Compte(num, s), tauxInteret(taux) {
}

double CompteEpargne::calculerInteret() const {
    return solde * tauxInteret / 100;
}


