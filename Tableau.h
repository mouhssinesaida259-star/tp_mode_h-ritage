#pragma once
class Tableau
{
protected:
	int taille;
	double* tab;
public:
	Tableau(int t);
	Tableau(const Tableau& T);
	Tableau operator = (const Tableau& T);
	double& operator [] (int indice);
	~Tableau();
};

