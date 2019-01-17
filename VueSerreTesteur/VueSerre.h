/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 14:41
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H

#include "ui_VueSerre.h"
#include "InfosClimat.h"
#include <QString>

class VueSerre : public QWidget {
    Q_OBJECT
public:
    VueSerre();
    VueSerre(QString nom,InfosClimat* uneInfoClimat);
    virtual ~VueSerre();
    void mettreAJour();
private:
    InfosClimat* uneInfoClimat;
    QString nom;
    Ui::VueSerre widget;
};

#endif /* _VUESERRE_H */
