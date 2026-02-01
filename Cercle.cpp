#include <iostream>
using namespace std;

#include "Cercle.h"
#include <cmath>

Cercle::Cercle(Point centre, float r) : Forme(centre), rayon(r) // constructeur avec un point en paramètre et un rayon
{}

float Cercle::perimetre() const {   // calcul du périmètre
    return 2 * M_PI * rayon;        // Périmètre du cercle
}

float Cercle::surface() const {     // calcul de la surface
    return M_PI * rayon * rayon;    
}

void Cercle::afficher(std::ostream& os) const { // implémentation de la méthode virtuelle pure pour afficher le cercle
    os << "Cercle [centre=" << geto()           // Affichage du centre du cercle
       << ", rayon=" << rayon << "]";           // Affichage du rayon du cercle
}
