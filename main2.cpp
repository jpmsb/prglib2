#include <iostream>
#include <string>
#include "prglib.h"

using namespace std;
using namespace prglib;

int main(){
    string entrada;
    int valor = 0;
    lista<int> numeros;

    while (valor != -1){
        getline(cin, entrada);
        int pos = 0;
        while (pos != string::npos){
            pos = entrada.find(' ');
            valor = stoi(entrada.substr(0, pos));

            numeros.anexa(valor);
            entrada.erase(0, pos+1);
        }
        int posicao = 0;
        numeros.ordena();
        numeros.inicia();
        while (! numeros.fim()){
            int numero = numeros.proximo();
            if (numero == valor){
                break;
            }
            posicao++;
        }
        numeros.inicia();
        for (int c = 0; c < posicao; c++){
            int ponto_de_partida = numeros.proximo();
        }
        while (! numeros.fim()){
            cout << numeros.proximo() << " ";
        }
        cout << endl;
    }

    return 0;
}
