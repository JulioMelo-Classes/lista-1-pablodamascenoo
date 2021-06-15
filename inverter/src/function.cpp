#include "function.h"

#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    size_t tamanho = arr.size();
    int count=tamanho-1;


    for(int i=0; i<tamanho/2; i++){
        std::swap(arr[i],arr[count]);
        count--;
    }
}
