#ifndef PIERRE_H_INCLUDED
#define PIERRE_H_INCLUDED

#include<iostream>
#include"gtest.h"

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

class PierreTest : public :: testing::Test{


protected:
    virtual void SetUp(){
        stone = new Pierre(2,4,'N');
    }
    virtual void TearDown(){}

    Pierre* stone;

};

#endif // PIERRE_H_INCLUDED
