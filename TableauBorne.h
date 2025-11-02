#pragma once
#include "Tableau.h"

class TableauBorne :
    public Tableau
{
private:
    float min;
    float max;
public:
    TableauBorne(int t, float vmin, float vmax);
    ~TableauBorne();
    const float& operator[](int ind)const;
    float& operator()(int ind, float val);
};