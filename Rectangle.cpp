#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(Point centre, float l, float h) : Forme(centre), largeur(l), hauteur(h) // constructeur avec un point en paramètre, une largeur et une hauteur
{}

float Rectangle::perimetre() const {    // calcul du périmètre
    return 2 * (largeur + hauteur);     // Périmètre du rectangle
}

float Rectangle::surface() const {      // calcul de la surface
    return largeur * hauteur;           // Surface du rectangle
}

void Rectangle::afficher(std::ostream& os) const {  // implémentation de la méthode virtuelle pure pour afficher le rectangle
    os << "Rectangle [centre=" << geto()            // Affichage du centre du rectangle
       << ", largeur=" << largeur                   // Affichage de la largeur du rectangle
       << ", hauteur=" << hauteur << "]";           // Affichage de la hauteur du rectangle
}
