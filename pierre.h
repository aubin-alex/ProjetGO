#ifndef PIERRE_H_INCLUDED
#define PIERRE_H_INCLUDED

#include<iostream>
#include"gtest.h"
#include"groupe.h"
#include"coordonnees.h"
#include"Goban.h"

using namespace std;

class Pierre{

private:
    int x;
    int y;
    char couleur;

public:
    //Constructeur
    Pierre(int _x, int _y, char col);
    void misegroupe(Goban.liste_groupe groupes);
    //Destructeur
    ~Pierre();
    //Accesseurs
    int getX(){return x;}
    int getY(){return y;}
    char getColor(){return couleur;}
    vector<Coordonees> test_liberte(Goban plateau);
    //Fonction pour savoir si la pierre est à proximité d'un groupe

};




class PierreTest : public :: testing::Test{


protected:
    virtual void SetUp(){
        stone = new Pierre(2,4,'N');
    }
    virtual void TearDown(){}

    Pierre* stone;

};

#endif // PIERRE_H_INCLUDED
