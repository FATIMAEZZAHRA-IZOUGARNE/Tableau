#pragma once
#include <iostream>
using namespace std;

class Tableau
{
protected:
	int taille;
	float* data;
public:
	Tableau(int taille);
	Tableau(const Tableau& tab);
	void afficher()const;
	void remplir();
	~Tableau();
	Tableau& operator=(const Tableau& tab);
	float& operator[](int index);
};

