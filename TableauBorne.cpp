#include "TableauBorne.h"

TableauBorne::TableauBorne(int t, float vmin, float vmax) :Tableau(t), min(vmin), max(vmax)
{
}

TableauBorne::~TableauBorne()
{
	cout << "appel TableauBorne destructor" << endl;
}

const float& TableauBorne::operator[](int i) const
{
	if (i >= this->taille || i < 0) {
		cout << "indice non valide" << endl;
		static const float faux = 0; //const?
		return faux;
	}
	return this->data[i];
}

float& TableauBorne::operator()(int ind, float val)
{
	if (ind >= this->taille || ind < 0) {
		cout << "indice non valide" << endl;
		static float faux = 0;
		return faux;
	}
	if (val<this->min || val>this->max) {
		cout << "valeur non valide" << endl;
		static float faux = 0;
		return faux;
	}
	this->data[ind] = val;
	return this->data[ind];
}