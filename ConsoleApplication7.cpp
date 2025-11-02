// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Tableau.h"
#include <iostream>
#include "TableauBorne.h"
int main() {
    Tableau t1(3);
    t1.remplir();
    t1.afficher();

    Tableau t2(t1);
    t2.afficher();

    Tableau t3 = t1;
    t3.afficher();
    t3[2] = 0;
    t3.afficher();

    TableauBorne b1(3, 0, 6);
    b1(0, 1);      // OK
    b1(1, 3);      // OK
    b1(2, 4);      // OK
    b1(5, 2);      // indice non valide
    b1(1, 10);     // valeur non valide
    b1.afficher(); // Affiche seulement les valeurs valides


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
