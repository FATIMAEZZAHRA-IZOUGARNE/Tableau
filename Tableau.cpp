#include "Tableau.h"

Tableau::Tableau(int t)
{
	this->taille = t;
	this->data = new float[this->taille];
	for (int i = 0;i < this->taille; i++)
		this->data[i] = 0;
}

Tableau::Tableau(const Tableau& tab)
{
	this->taille = tab.taille;
	this->data = new float[this->taille];
	for (int i = 0;i < this->taille; i++)
		this->data[i] = tab.data[i];
}

void Tableau::afficher() const
{
	for (int i = 0;i < this->taille;i++)
		cout << "T[" << i << "]=" << this->data[i] << endl;
}

void Tableau::remplir()
{
	cout << "Remplir le tableau:" << endl;
	for (int i = 0;i < this->taille;i++) {
		cout << "T[" << i << "]=";
		cin >> this->data[i];
		cout << endl;
	}
}

Tableau::~Tableau()
{
	delete[] this->data;
	this->data = nullptr;
}

Tableau& Tableau::operator=(const Tableau& tab)
{
	if (this != &tab) {
		delete[]this->data;
		this->taille = tab.taille;
		this->data = new float[this->taille];
		for (int i = 0;i < this->taille; i++)
			this->data[i] = tab.data[i];
	}
	return *this;
}

float& Tableau::operator[](int i)
{
	if (i < 0 || i >= this->taille) {
		cout << "indice non valide" << endl;
		static  float faux = 0;
		return faux;
	}
	return this->data[i];
}
