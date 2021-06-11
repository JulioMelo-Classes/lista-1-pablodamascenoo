#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
    std::vector<unsigned int> v = {};
    if(n == 1){
        return v;
    }
    else{
        v.push_back(1);
        v.push_back(1);
    }
    while (v[v.size()-1]+v[v.size()-2]< n){
        v.push_back(v[v.size()-1]+v[v.size()-2]);
    }
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return v;
}
