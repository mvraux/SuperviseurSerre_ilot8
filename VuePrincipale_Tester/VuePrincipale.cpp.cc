/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 14:21
 */

#include "VuePrincipale.h"
using namespace std;

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    QGridLayout *serre = new QGridLayout(this);
    VueSerre* ptrserre = new VueSerre;
    serre->addWidget(ptrserre);
    setLayout(serre);
}

VuePrincipale::~VuePrincipale() {
}

/*
  VueMeteo* VuePrincipale :: getLaVueMeteo(){
    
}
 */

VueSerre* VuePrincipale::getLaVueSerre() {

    return 0;
}

void VuePrincipale::mettreAjour() {
    //VueMeteo mettreAjour();
    VueSerre mettreAjour();
}