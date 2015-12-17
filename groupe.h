
#ifndef GROUPE_H_INCLUDED
#define GROUPE_H_INCLUDED

#include<iostream>
#include "pierre.h"
#include <vector>
#include "coordonnees.h"


using namespace std;

class Groupe {

private:
    vector<Coordonees> liste_libertes;//liste des libertés d'un groupe
    vector<Pierre*> groupePierres;// vecteur des pierres composant un groupe
    char couleur;
public:
    //Constructeur
    Groupe(Pierre* pierre, Goban plateau);

    //Accesseur de la couleur
    char getColor(){return couleur;}

    bool modif_libertes(Pierre pierre);//regarde si la pose d'une pierre modifie les libertés du groupe
    //Destructeur
    virtual ~Groupe();

    //
};

#endif
