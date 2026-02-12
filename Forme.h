#include <iostream>
using namespace std;

#include "Point.h"

#ifndef cpp_Forme_h
#define cpp_Forme_h

class Forme {
private:
    Point o;    // = Point();

public:
    // Méthodes :
    // destructeur virtuel
    virtual ~Forme() {} // Pour éviter les fuites mémoires lors de la suppression d'objets dérivés via un pointeur de type Forme*
    
    // méthodes abstraites
    virtual float perimetre() const = 0;    // méthode purement virtuelle pour le périmètre
    virtual float surface() const = 0;      // méthode purement virtuelle pour la surface

    // Constructeur
    Forme(Point p);         // constructeur avec un point en paramètre
    Forme();                // constructeur sans paramètre (initialisation à l'origine)
    Point geto() const;     // accesseur en lecture
    void seto(Point p);     // mutateur en écriture

    // Surcharge de +=
    void operator+=(Forme const&f); // Le paramètre f s'applique à la classe Forme.

    virtual void afficher(std::ostream& os) const = 0;  // méthode virtuelle pure pour afficher la forme
};

// Surchage de +=
ostream& operator<<(ostream&s, Forme const&f);  // 's' ne s'applique pas à la classe Forme donc la déclaration se fait à l'exterieur de la classe


#endif