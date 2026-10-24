#ifndef COMPTE_HPP
#define COMPTE_HPP

#include <string>
using namespace std;

class Compte {
protected:
    string numero;
    double solde;

public:
    Compte(string num, double s);

    void deposer(double montant);
    void retirer(double montant);
    void afficher() const;
};

#endif
