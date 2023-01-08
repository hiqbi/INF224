//
// main.cpp
// Created on 21/10/2018
//

#include "Multimedia.h"
#include "Photo.h"
#include "Video.h"
#include <iostream>
#include <string>

using namespace std ;


int main(){

    // Après polymorphisme, on ne peut plus instancer des objeys de la classe de base Multimedia, car elle devient une classe abstraite
    //Multimedia *m = new Multimedia("m", "Random file") ;
    //m->print(cout) ;

    //Etape 4
    cout << endl << "#----- Etape 4 : Les classes Photo et Video -----#" << endl ;

    Video * video = new Video("video", "video file", 5) ;
    video->print(cout) ;

    Photo * photo = new Photo("photo", "photo file", 720, 1080) ;
    photo->print(cout) ;


    //Etape 5 :
    cout << endl << "#----- Etape 5 : Polymorphisme -----#" << endl ;

    auto ** multimedia = new Multimedia * [2] ;
    unsigned int count = 0 ;
    multimedia[count++] = new Photo("photo", "photo file", 720, 1080) ;
    multimedia[count++] = new Video("video", "video file", 5.4) ;

    for (unsigned int k = 0 ; k < count ; ++k) {
        multimedia[k]->print(cout) ;
    }

    return 0 ;
}
