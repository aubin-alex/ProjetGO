#ifndef PIERRE_H_INCLUDED
#define PIERRE_H_INCLUDED

#include<iostream>

using namespace std;

class Pierre{

private:
    int x;
    int y;
    string couleur;

public:
    //Constructeur
    Pierre(int _x, int _y, string col);
    //Destructeur
    ~Pierre();
    //Accesseurs
    int getX(){return x;}
    int getY(){return y;}
    string getColor(){return couleur;}
};

#endif // PIERRE_H_INCLUDED
