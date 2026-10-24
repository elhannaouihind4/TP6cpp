#include <iostream>
#include "Etudiant.hpp"

Etudiant::Etudiant(string n, int a, string niv)
    : Personne(n, a), niveau(niv) {
}

void Etudiant::afficher() const {
    Personne::afficher();

    cout << "Niveau : " << niveau << endl;
}




