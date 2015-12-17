#ifndef PIERRE_H_INCLUDED
#define PIERRE_H_INCLUDED

#include<iostream>
#include "gtest.h"
#include"coordonnees.h"

using namespace std;

class Pierre{

private:
    int x;
    int y;
    char couleur;

public:
    //Constructeur
    Pierre(int _x, int _y, char col);
    //Destructeur
    ~Pierre();
    //Accesseurs
    int getX(){return x;}
    int getY(){return y;}
    char getColor(){return couleur;}



};


#endif // PIERRE_H_INCLUDED
