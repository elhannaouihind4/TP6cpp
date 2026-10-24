#include "Employe.hpp"

Employe::Employe(string n, int i, float salaire)
    : nom(n), id(i), salaireDeBase(salaire) {
}

void Employe::afficherInfos() const {
    cout << "Nom : " << nom << endl;
    cout << "ID : " << id << endl;
    cout << "Salaire de base : "
         << salaireDeBase << " DH" << endl;
}

Employe::~Employe() {
    cout << "Destruction de Employe : "
         << nom << endl;
}



