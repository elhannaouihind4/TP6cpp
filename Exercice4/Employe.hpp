#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP

#include <iostream>
#include <string>
using namespace std;

class Employe {
protected:
    string nom;
    int id;
    float salaireDeBase;

public:
    Employe(string n, int i, float salaire);
    virtual void afficherInfos() const;
    virtual ~Employe();
};

#endif
