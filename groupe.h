
#ifndef GROUPE_H_INCLUDED
#define GROUPE_H_INCLUDED

#include<iostream>
#include "pierre.h"
#include <vector>

using namespace std;

class Groupe{

private:
    //Pierre PierreCentrale;
    vector< pair<int,int> > liste_libertes;
public:
    //Constructeur
    Groupe();
    bool modif_liberte(Pierre adversaire);

    //Destructeur
    virtual ~Groupe();
};

#endif
