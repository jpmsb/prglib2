/* 
 * File:   main.cpp
 * Author: sobral
 *
 * Created on 8 de Outubro de 2016, 19:05
 */

#include <iostream>
#include <string>
#include <prglib.h>
 
using namespace std;
 
using prglib::arvore;
using prglib::lista;
 
/*
 * 
 */
int main(int argc, char** argv) {
 
    //arvore<int> * a = new arvore<int>(10);
    auto a = new arvore<int>(10);
 
    a->adiciona(5);
    a->adiciona(7);
    a->adiciona(2);
    a->adiciona(13);
    a->adiciona(11);
    a->adiciona(15);
 
    lista<int> l;
    a->listeInOrder(l);
 
    cout << "In-order: ";
    l.escrevaSe(cout, ", ");
    cout << endl;

    while (a->tamanho() > 0) {
      int x = a->obtemMaior();
      cout << x << endl;
      a->remove(x);
    }
 
    return 0;
}
