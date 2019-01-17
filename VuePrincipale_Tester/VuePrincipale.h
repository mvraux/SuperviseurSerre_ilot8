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
#include <QLayout>
#include <QBoxLayout>
#include "VueSerre.h"
#include "ui_VueSerre.h"
#include "ui_VuePrincipale.h"
using namespace std;

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    virtual ~VuePrincipale();
    //VueMeteo* getLaVueMeteo();
    VueSerre* getLaVueSerre();
    void mettreAjour();
private:
    //VueMeteo *laVueMeteo;
    VueSerre *laVueSerre[3];
    Ui::VuePrincipale widget;
};

#endif /* _VUEPRINCIPALE_H */
