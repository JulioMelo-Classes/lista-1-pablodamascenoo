/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.

/*
vou considerar 80% ja que vc não validou a entrada
*/
int main(void)
{

    Ponto p1, p2, pr;

    while(cin >> p1.x >> p1.y >> p2.x>> p2.y >> pr.x >> pr.y){
    
    /*mais outro exemplo de indentação ruim*/
    int resposta = pt_in_rect(p1, p2, pr);

    if(resposta == 1){
        cout << "border"<<endl;
    }
    else if(resposta == 2){
        cout << "outside"<<endl;
    }
    else if(resposta == 0){
        cout << "inside"<<endl;
    }
    }
    return 0;
}
