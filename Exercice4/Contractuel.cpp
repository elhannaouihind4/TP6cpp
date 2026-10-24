#include "Contractuel.hpp"

Contractuel::Contractuel(string n, int i, float salaire,
                         int duree, float taux)
    : Employe(n, i, salaire),
      dureeContrat(duree),
      tauxHoraire(taux) {
}

float Contractuel::calculerSalaireMensuel(int heures) const {
    return heures * tauxHoraire;
}

void Contractuel::afficherInfos() const {
    cout << "Type : Employe contractuel" << endl;
    Employe::afficherInfos();
    cout << "Duree du contrat : "
         << dureeContrat << " mois" << endl;
    cout << "Taux horaire : "
         << tauxHoraire << " DH/heure" << endl;
}

Contractuel::~Contractuel() {
    cout << "Destruction de Contractuel" << endl;
}


