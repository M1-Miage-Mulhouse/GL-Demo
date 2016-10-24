/* 
 * File:   liste.h
 * Author: yvan
 *
 * Created on 29 août 2015, 14:15
 */
#ifndef liste_H
#define	liste_H

#include "chainon.h"
#include <iostream>

using namespace std;

class liste  
{
public:
	// Constructeur
	liste();
	// Destructeur
	~liste();

	// Calcul de la taille
	int taille() const;
	// Insertion
	void inserer(double val);
	// Suppression
	void supprimer(double val);
	// Test d'egalite
	const bool operator==(const liste &lc);
	// Affectation
	liste& operator=(const liste &lc);
	// Inversion
	void inverser();
	// Fusion
	void fusion(const liste &lc);
	// Acces au nieme chainon
	chainon* operator[](int n);

        friend ostream& operator<<(ostream& os, const liste& lcs);
        
private:
	chainon *t;
};

ostream& operator<<(ostream& os, const liste& lcs);

#endif	/* liste_H */

