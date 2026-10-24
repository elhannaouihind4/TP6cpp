#include <iostream>
#include "ProduitAlimentaire.hpp"
#include "ProduitElectronique.hpp"

using namespace std;

int main() {
    ProduitAlimentaire p1("Lait", 8.50, "18/05/2027");

    ProduitElectronique p2("Television", 8000, 2);

    cout << "Produit alimentaire " << endl;
    p1.afficherInfos();

    cout << "\n Produit electronique " << endl;
    p2.afficherInfos();

    return 0;
}
