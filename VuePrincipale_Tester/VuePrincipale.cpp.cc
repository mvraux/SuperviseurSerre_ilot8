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
    VueSerre* ptrserre = new VueSerre;
    widget.serre->addWidget(ptrserre);

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