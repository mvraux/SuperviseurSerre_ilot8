/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vueSerre.h
 * Author: snir2g2
 *
 * Created on 15 janvier 2019, 14:51
 */

#ifndef VUESERRE_H
#define VUESERRE_H
#include "InfoClimat.h"

class vueSerre {
public:
    vueSerre();
    vueSerre(const vueSerre& orig);
    virtual ~vueSerre();
    mettreAJour();
    VueSerre(Qstring nom,InfosClimat uneInfoClimat);

private:
    Qstring nom;
    InfosClimat();
};
#endif /* VUESERRE_H */

