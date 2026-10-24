#include "Permanent.hpp"

Permanent::Permanent(string n, int i, float salaire, float prime)
    : Employe(n, i, salaire), primeAnnuelle(prime) {
}

void Permanent::afficherInfos() const {
    cout << "Type : Employe permanent" << endl;
    Employe::afficherInfos();
    cout << "Prime annuelle : "
         << primeAnnuelle << " DH" << endl;
}

Permanent::~Permanent() {
    cout << "Destruction de Permanent" << endl;
}

