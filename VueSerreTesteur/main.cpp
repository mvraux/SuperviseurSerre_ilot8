/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 15 janvier 2019, 14:48
 */

#include <QApplication>
#include "VueSerre.h"
#include "InfosClimat.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    
    VueSerre* uneVueSerre = new VueSerre();
    InfosClimat * uneInfoClimat = new InfosClimat();
    
    uneVueSerre->show();
   
    uneVueSerre->mettreAJour();
    uneInfoClimat.
    
    
    return app.exec();
}
