/* 
 * File:   liste.cpp
 * Author: yvan
 * 
 * Created on 29 août 2015, 14:15
 */
#include "liste.h"
#include <cstdlib>

liste::liste() : t(NULL) {
}

liste::~liste() {
    chainon* as = t;
    int x;
    while (as != NULL) {
        t = t->suiv;
        delete as;
        as = t;
    }
}


ostream& operator<<(ostream& os, const liste& lcs) {
    os << "{";
    if(lcs.t != NULL) {
        os << lcs.t->v;
        chainon* crt = lcs.t->suiv;
        while(crt != NULL) {
            os << ", " << crt->v;
            crt = crt->suiv;
        }
    } 
    os << "}";
    return os;
}

int liste::taille() const {
    int n = 0;
    chainon* crt = t;
    while (crt != NULL) {
        crt = crt->suiv;
        ++n;
    }
    return n;
}

void liste::inserer(double val) {
    chainon* n = new chainon(val);
    if (t == NULL || val < t->v) {
        n->suiv = t;
        t = n;
    } else {
        chainon* crt = t;
        while (crt->suiv != NULL && crt->suiv->v < val)
            crt = crt->suiv;

        n->suiv = crt->suiv;
        crt->suiv = n;
    }
}

