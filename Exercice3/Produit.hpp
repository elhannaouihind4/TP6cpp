#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>
using namespace std;

class Produit {
protected:
    string nom;
    double prix;

public:
    Produit(string n, double p);

    virtual void afficherInfos() const;

    virtual ~Produit();
};

#endif
