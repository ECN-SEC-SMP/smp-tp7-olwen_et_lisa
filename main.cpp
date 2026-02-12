#include <iostream>
using namespace std;

#include "Point.h"
#include "Forme.h"
#include "Rectangle.h"
#include "Cercle.h"

int main ()
{
  /*    
    float x, y, a, b;
  
    Forme F;

    cout << "Le centre  de la forme est : ";
    cout << F << endl;
    */

    float x, y;
    cout << "Ecrivez la largeur et la hauteur du rectangle : " << endl;
    cin >> x >> y;

    cout << "Coordonnées d'origine du rectangle : ";
    Rectangle rect(Point(0,0), x, y);
    cout << rect << endl;
    cout << "Perimetre = " << rect.perimetre() << endl;
    cout << "Surface   = " << rect.surface() << endl;


    float ce;
    cout << "Ecrivez la taille du rayon du cercle : " << endl;
    cin >> ce;

    cout << "Coordonnées d'origine du cercle : ";
    Cercle c(Point(0,0), ce);
    cout << c << endl;
    cout << "Perimetre = " << c.perimetre() << endl;
    cout << "Surface   = " << c.surface() << endl;

 /*   
    cin >> x >> y;

    // Déclaration de la classe :
    //Point();      // Utilisation du constructeur pour initialiser à l'origine
    Point t(x, y);  // Utilisation du deuxième constructeur
    //Point p(t);   // Utilisation du troisième constructeur pour créer une copie

    cout << "Coordonnées AVANT translation : " << endl;
    //t.print();
    cout << t << endl;

    cin >> a >> b;
    Point p(a,b);

    // Translation :
    //t.translater(a, b);
    //t.translater(p);
    t += p;

    cout << "Coordonnées APRES translation : " << endl;
    //t.print();
    cout << t << endl;

    // Faire au moins cercle heritage
    */
    
}