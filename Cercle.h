#include <iostream>
using namespace std;

#ifndef cpp_Cercle_h
#define cpp_Cercle_h

#include "Forme.h"

class Cercle : public Forme {   // Classe Cercle dérivée de la classe Forme
private:        
    float rayon;    // Rayon du cercle

public:
    Cercle(Point centre, float r);  // constructeur avec un point en paramètre et un rayon

    float perimetre() const override;   // calcul du périmètre
    float surface() const override;     // calcul de la surface

    void afficher(std::ostream& os) const override; // implémentation de la méthode virtuelle pure pour afficher le cercle
};  

#endif
