/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 14:41
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
}

VueSerre::~VueSerre() {
}
VueSerre::VueSerre(QString nom,InfosClimat *uneInfoClimat){
    this->nom = nom;
    this->uneInfoClimat = uneInfoClimat;
}

void VueSerre::mettreAJour(){

}