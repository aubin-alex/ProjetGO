
#ifndef GROUPE_H_INCLUDED
#define GROUPE_H_INCLUDED

#include<iostream>
#include "pierre.h"
#include <vector>
#include "coordonnees.h"



using namespace std;

class Groupe {

private:
    //liste des libertés d'un groupe
    vector<Coordonees> liste_libertes;
    //couleur des pierres du groupe
    char couleur;

public:
    //Constructeur avec en paramètre la premiere pierre du groupe
    Groupe(Pierre* pierre);
    // vecteur des pierres composant un groupe
    vector<Pierre*> groupePierres;
    //Accesseur de la couleur
    char getColor(){return couleur;}
    //Regarde si la pose d'une pierre modifie les libertés du groupe
    bool modif_libertes(Pierre pierre);
    //Destructeur
    virtual ~Groupe();

};

#endif
