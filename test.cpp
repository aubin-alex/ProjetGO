#include"joueur.h"
#include"pierre.h"
#include"groupe.h"
#include"Goban.h"
#include"gtest.h"

//using namespace std;



TEST_F(GobanTest, GobanVide){

    for (int i=0;i<TAILLE+1;i++){
       for (int j=0;j<TAILLE+1;j++){
           EXPECT_EQ(' ',plateauVide.jeu[i][j]);
        }
    }


}

TEST_F(PierreTest,couleur){
    EXPECT_EQ('N',stone->getColor());
}
