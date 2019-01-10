/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale_Tester.h
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 18:17
 */

#ifndef _VUEPRINCIPALE_TESTER_H
#define _VUEPRINCIPALE_TESTER_H

#include "ui_VuePrincipale_Tester.h"

class VuePrincipale_Tester : public QWidget {
    Q_OBJECT
public:
    VuePrincipale_Tester();
    virtual ~VuePrincipale_Tester();
private:
    Ui::VuePrincipale_Tester widget;
};

#endif /* _VUEPRINCIPALE_TESTER_H */
