/* 
 * File:   chainon.h
 * Author: yvan
 *
 * Created on 29 août 2015, 14:14
 */

#ifndef CHAINON_H
#define	CHAINON_H

#include <iostream>

using namespace std;

class liste;

class chainon {
    friend class liste;
private:

    chainon(double val) : v(val), suiv(0) {
    }

    double v;
    chainon *suiv;
    friend ostream& operator<<(ostream& os, const liste& lcs);
};




#endif	/* CHAINON_H */

