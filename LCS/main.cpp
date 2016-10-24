/* 
 * File:   main.cpp
 * Author: yvan
 *
 * Created on 29 août 2015, 14:13
 */

#include <cstdlib>
#include "liste.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    liste l;
    
    double t[] = {5, 2, 8, 3, 1, 9, 2};
    int n = 6;
    
    cout << l << endl;
    for(int i = 0; i < n; ++i) {
        l.inserer(t[i]);
        cout << l << endl;
    }
    
    return 0;
}

