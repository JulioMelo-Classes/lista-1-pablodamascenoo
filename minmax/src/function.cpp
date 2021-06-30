#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
ok
*/
std::pair<int,int> min_max( int V[], size_t n )
{
    // TODO: Adicione aqui sua solução.
    int maior = V[0];
    int menor = V[0];
    std::pair<int,int> par;
    if (n==0){
        par.first = -1;
        par.second = -1;
    }
    for(int i=0; i<n; i++){
        if(V[i] < menor){
            menor = V[i];
            par.first = i;
        }
        else if(V[i] >= maior){
            maior = V[i];
            par.second = i;
        }
    }
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return par;
}
