#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
using namespace std;

class Personne {
protected:
    string nom;
    int age;

public:
    Personne(string n, int a);

    void afficher() const;
};

#endif
