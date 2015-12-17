#ifndef PIERRE_H_INCLUDED
#define PIERRE_H_INCLUDED

#include<iostream>
#include "gtest.h"
#include"coordonnees.h"
#include "Goban.h"

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



// classe test pierre
class PierreTest : public :: testing::Test{


protected:
    virtual void SetUp(){
        Goban plateau;
        stone = new Pierre(2,4,'N');
        stone2=new Pierre(5,5,'B');
        stone3=new Pierre(5,4,'B');
    }
    virtual void TearDown(){}

    Pierre* stone;
    Pierre* stone2;
    Pierre* stone3;

};

#endif // PIERRE_H_INCLUDED
