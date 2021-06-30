#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
/*
acho que a condição para BORDER estámeio superdimensionada, mas blz..
*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    int lado = (SD.x)-(IE.x);
    int altura = (SD.y)-(IE.y);

    location_t resposta = OUTSIDE; 

    if(((P.x) >= (IE.x) && (P.x) <= (SD.x)) && ((P.y) >= (IE.y) && (P.y) <= (SD.y))){
        if(((P.x) == (IE.x)) || ((P.x) == (SD.x)) && ((P.y) >= (IE.y)) && ((P.y) <= (SD.y))){
            resposta = BORDER;
        }
        else if(((P.x) > (IE.x)) && ((P.x) < (SD.x)) && ((P.y) == (IE.y)) || ((P.y) == (SD.y))){
            resposta = BORDER;
        }
        else {
        resposta = INSIDE; //não vou tirar pontos dessa vez, mas essa indentação aqui usualmente é penalizada.
    }
    }
    else{
        resposta = OUTSIDE;
    }

    return resposta;
}
