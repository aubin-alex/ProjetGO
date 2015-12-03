#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

#include<iostream>
#include"pierre.h"

using namespace std;

class Joueur{

private:
    string couleur;


public:
    int score;
    //Consructeur
    Joueur(string col);
    //Destructeur
    ~Joueur();
    //Accesseur
    string getCouleur(){return couleur;}
    //Méthode pour placer une pierre sur le plateau
    Pierre* jouer();

};

#endif // JOUEUR_H_INCLUDED
