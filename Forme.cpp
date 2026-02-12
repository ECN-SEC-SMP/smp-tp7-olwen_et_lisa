#include <iostream>
using namespace std;

#include "Point.h"
#include "Forme.h"

Forme::Forme(Point p){
    this->o = p;    // On met "this->" car il peut y avoir confusion entre le o en paramètre et le o de la classe Forme
}

Forme::Forme(){
    o.setx(0);  // Le o de la classe Forme est initialisée à l'origine
    o.sety(0);  // Le o de la classe Forme est initialisée à l'origine
}

Point Forme::geto() const{
    return this->o; // On met "this->" car il peut y avoir confusion entre le o en paramètre et le o de la classe Forme
}

void Forme::seto(Point p) {
    o = p;  
}   

void Forme::operator+=(Forme const&f) // Surchage de l'opérateur +=
{
    o += f.o;   // Addition du point o de la classe Forme avec le point o de la forme f passée en paramètre
}

ostream& operator<<(ostream&s, Forme const&f) // surcharge de l’opérateur <<
{
    s << f.geto();  // Affichage du point o de la forme f passée en paramètre
    return s;       // Retourne le flux de sortie
}   