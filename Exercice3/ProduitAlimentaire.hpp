#ifndef PRODUIT_ALIMENTAIRE_HPP
#define PRODUIT_ALIMENTAIRE_HPP

#include "Produit.hpp"

class ProduitAlimentaire : public Produit {
private:
    string dateExpiration;

public:
    ProduitAlimentaire(string n, double p, string date);

    void afficherInfos() const override;
};

#endif
