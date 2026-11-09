#include "Tableau.h"
#include<iostream>
using namespace std;
Tableau::Tableau(int taille)
{
	if (taille <= 0) {
		cout << "creation invalide" << endl;
	}
	this->taille = taille;
	this->tab = new double[taille];
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->tab = new double[taille];
	for (int i = 0;i < taille;i++) {
		tab[i] = T.tab[i];
	}
}

Tableau Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		delete[]tab;
		tab = nullptr;
		this->taille = T.taille;
		this->tab = new double[taille];
		for (int i = 0;i < taille;i++) {
			tab[i] = T.tab[i];
		}
	}
	return *this;
}

double& Tableau::operator[](int indice)
{
	if (indice < 0 || indice >= taille)
	{
		cout << "Indice invalide" << endl;
		exit(-1);
	}
	else
	{
		return tab[indice];
	}
}


Tableau::~Tableau()
{
	delete[]tab;
	tab = nullptr;
}
