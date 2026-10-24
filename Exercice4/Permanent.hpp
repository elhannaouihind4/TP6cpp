#ifndef PERMANENT_HPP
#define PERMANENT_HPP

#include "Employe.hpp"

class Permanent : public Employe {
private:
    float primeAnnuelle;

public:
    Permanent(string n, int i, float salaire, float prime);
    void afficherInfos() const override;
    ~Permanent() override;
};

#endif
