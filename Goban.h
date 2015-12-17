//Classe du plateau de go



#ifndef Goban__h
#define Goban__h

#include <vector>
#include <iostream>
#include <cstdlib>
#include"gtest.h"
#include "groupe.h"
#include "pierre.h"

using namespace std;

const int TAILLE=5;

class Goban{

private:
     //Vecteur des cases

public:
    char jeu[TAILLE][TAILLE];
    vector<Groupe> liste_groupe;
    //Crée le plateau vide
    Goban();
    //Destructeur
    ~Goban();
     //fonction affichage
    void affiche();
    //Teste si la pose d'une pierre est possible
    bool posepossible(int x, int y);
    //Teste si une pierre appartient à un groupe et on l'ajoute si c'est le cas, permet aussi la fusion
    //des groupes
    void appartientGroupe(Pierre* pierre);
    //Fonction pour savoir si la pierre est à proximité d'un groupe
    vector<Coordonees> test_liberte(Pierre* pierre);
};


// classe test goban
class GobanTest : public ::testing::Test{
protected:
    virtual void SetUp(){
    //On crée 3 pierres pour tester notre code

        Pierre noire(2,3,'N');
        Pierre blanche1(5,5,'B');
        Pierre* blanche2 = new Pierre(5,4,'B');

        Groupe groupe(&blanche1);
        plateau.liste_groupe.push_back(groupe);

        plateau.jeu[2][3]='N';
        plateau.jeu[5][5]='B';
        plateau.jeu[5][4]='B';
    }

    virtual void TearDown(){

    }

    bool vraie (){
        return true;
    }

    Goban plateau;
    Goban plateauVide;


};

// classe test goban
class GobanTest2 : public ::testing::Test{
protected:
    virtual void SetUp(){
    //On crée 3 pierres pour tester notre code

        Pierre noire(2,3,'N');
        Pierre blanche1(5,5,'B');
        Pierre* blanche2 = new Pierre(5,4,'B');

        Groupe groupe(&blanche1);
        plateau.liste_groupe.push_back(groupe);
        plateau.appartientGroupe(blanche2);
        plateau.jeu[2][3]='N';
        plateau.jeu[5][5]='B';
        plateau.jeu[5][4]='B';
    }

    virtual void TearDown(){

    }

    bool vraie (){
        return true;
    }

    Goban plateau;
    Goban plateauVide;


};



#endif
