/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 14:21
 */
#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"

class VuePrincipale : public QDialog {
    Q_OBJECT
public:
    VuePrincipale(Superviseur* unSuperviseur);
    virtual ~VuePrincipale();
    VueMeteo* getLavueMeteo();
    mettreAjour();
private:
    Ui::VuePrincipale widget;
};

#endif /* _VUEPRINCIPALE_H */
