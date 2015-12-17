/*
 * File:   main.cpp
 * Author: user
 *
 * Created on 3 décembre 2015, 09:05
 */

#include <cstdlib>
#include<iostream>
#include"gtest.h"
#include"factoriel.h"

using namespace std;

/*
 *
 */

int factoriel (int nombre){

    int resultat=1;

    for(int i=1;i<nombre+1;i++){
        resultat=resultat*i;
    }

    return resultat;
}

TEST(factoriel_test, GereLesValeursPositives){
    EXPECT_EQ(1,factoriel(1));
    //EXPECT_EQ(430, factoriel(5));
    EXPECT_EQ(24, factoriel(4));
}
