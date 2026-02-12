#include <iostream>
using namespace std;

#include "Point.h"

void Point::translater(float a, float b)    // Méthode translater avec une paire de réels
{
    this->x += a;   // On met "this->" car il peut y avoir confusion entre le x en paramètre et le x de la classe Point
    cout << "Translation de x = " << x << " par a = " << a << endl;    // Affichage pour vérif
    this->y += b;   // On met "this->" car il peut y avoir confusion entre le y en paramètre et le y de la classe Point
    cout << "Translation de y = " << y << " par b = " << b << endl;    // Affichage pour vérif
}


void Point::translater(Point &p)    // Méthode translater avec un autre Point
{
    this->x += p.x; // On met "this->" car il peut y avoir confusion entre le x en paramètre et le x de la classe Point
    this->y += p.y; // On met "this->" car il peut y avoir confusion entre le y en paramètre et le y de la classe Point
}


Point::Point() // Constructeur sans paramètre qui initialise le point à l'origine
{
    x = 0;  // Le x de la classe Point est initialisée à zéro
    y = 0;  // Le y de la classe Point est initialisée à zéro
}


Point::Point(float x, float y)  // Constructeur avec deux paramètres
{
    this->x = x; // On met "this->" car il peut y avoir confusion entre le x en paramètre et le x de la classe Point
    this->y = y; // On met "this->" car il peut y avoir confusion entre le y en paramètre et le y de la classe Point
}


Point::Point(Point const &p)    // Constructeur par copie
{
    x = p.x;    // Le x de la classe Point prend la valeur du x du point p passé en paramètre
    y = p.y;    // Le y de la classe Point prend la valeur du y du point p passé en paramètre
}


void Point::print() // Méthode pour afficher les coordonnées du point
{
cout << "Abscisse : " << x << endl; // Affichage de l'abscisse
cout << "Ordonnée : " << y << endl; // Affichage de l'ordonnée
}


ostream& operator<<(ostream&s, Point const&t) // surcharge de l’opérateur <<
{
    s << t.getx() << "x et " << t.gety() << "y.";   // Affichage des coordonnées du point
    return s;
}   


void Point::operator+=(Point const&t) // Surchage de l'opérateur +=
{
    x += t.x;   // Addition de l'abscisse
    y += t.y;   // Addition de l'ordonnée
}
    