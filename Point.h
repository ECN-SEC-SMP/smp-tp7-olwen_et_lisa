#include <iostream>
using namespace std;

#ifndef cpp_Point_h
#define cpp_Point_h

class Point {   // Classe Point
private:
    float x;    // Abscisse
    float y;    // Ordonnée

public :
    void translater(float x, float y);  // Méthode pour translater le point avec une paire de réels
    void translater(Point&);            // Méthode pour translater le point avec un autre point
    

    // Accesseurs == Accesseur en lecture
    float getx()const { return x; } // 'const' pour dire que la méthode ne modifie pas l'objet
    float gety()const { return y; } // 'const' pour dire que la méthode ne modifie pas l'objet

    // Mutateurs == Accesseur en écriture
    void setx(float x) { this->x = x; } // 'this->' pour différencier l'attribut x de la classe et le paramètre x de la méthode
    void sety(float y) { this->y = y; } // 'this->' pour différencier l'attribut y de la classe et le paramètre y de la méthode

    // Constructeurs
    Point(); // Pour initialiser à l'origine
    Point(float x, float y);    // Avec deux paramètres
    Point(Point const&t);       // Par copie

    void print();   // Méthode pour afficher les coordonnées du point

    void operator+=(Point const&t); // Le paramètre t s'applique à la classe Point.
};

ostream& operator<<(ostream&s, Point const&t); // 's' ne s'applique pas à la classe Point donc la déclaration se fait à l'exterieur de la classe

#endif