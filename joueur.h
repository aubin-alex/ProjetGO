#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

#include<iostream>
#include"pierre.h"
#include"Goban.h"

using namespace std;

class Joueur{

private:
    char couleur;


public:
    int score;
    //Consructeur
    Joueur(char col);
    //Destructeur
    ~Joueur();
    //Accesseur
    char getCouleur(){return couleur;}
    //Méthode pour placer une pierre sur le plateau
    Pierre* jouer();

};

#endif // JOUEUR_H_INCLUDED
