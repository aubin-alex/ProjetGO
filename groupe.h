
#ifndef GROUPE_H_INCLUDED
#define GROUPE_H_INCLUDED

#include<iostream>
#include "pierre.h"
#include <vector>
#include "coordonnees.h"

using namespace std;

class Groupe{

private:
    vector<Coordonees> liste_libertes;
    vector<Pierre*> groupePierres;
public:
    //Constructeur
    Groupe(Pierre* pierre);
    //
    bool modif_liberte(Pierre adversaire);
    bool Groupe::ajout_liberte(Pierre ami);
    //Destructeur
    virtual ~Groupe();
};

#endif
