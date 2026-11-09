#include "TableauBorne.h"
#include <iostream>
#include <cstdlib>
using namespace std;

TableauBorne::TableauBorne(int min, int max, int taille)
    : Tableau(taille)
{
    this->borneMin = min;
    this->bornMax = max;

    if (min > max)
    {
        cout << "Bornes invalides" << endl;
        exit(-1);
    }
}

const float& TableauBorne::operator[](int i) const
{
    if (i < 0 || i >= taille)
    {
        cout << "Indice invalide" << endl;
        exit(-1);
    }
    else
    {
        return tab[i];
    }
}