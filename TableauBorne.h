#pragma once
#include "Tableau.h"

class TableauBorne : public Tableau
{
private:
    int borneMin;
    int bornMax;

public:
    TableauBorne(int min, int max, int taille);
    const float& operator[](int i) const;
};