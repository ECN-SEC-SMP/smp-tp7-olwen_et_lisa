#include <iostream>
using namespace std;

#include "Forme.h"

#ifndef cpp_Rectangle_h
#define cpp_Rectangle_h

class Rectangle : public Forme {
private:
    float largeur;  // largeur du rectangle
    float hauteur;  // hauteur du rectangle

public:
    Rectangle(Point centre, float l, float h);  // constructeur avec un point en paramètre, une largeur et une hauteur

    float perimetre() const override;   // calcul du périmètre
    float surface() const override;     // calcul de la surface

    void afficher(std::ostream& os) const override; // implémentation de la méthode virtuelle pure pour afficher le rectangle
};

#endif