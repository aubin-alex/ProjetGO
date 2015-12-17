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
    //Mise à jour plateau
    void updateCase();
    //Teste si la pose d'une pierre est possible
    bool posepossible(int x, int y);
    //Teste si une pierre appartient à un group
    void appartientGroupe(Pierre* pierre); e
    //Fonction pour savoir si la pierre est à proximité d'un groupe
    vector<Coordonees> test_liberte(Pierre* pierre);
};


// classe test goban
class GobanTest : public ::testing::Test{
protected:
    virtual void SetUp(){
    //On crée 3 pierres pour tester notre code
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
