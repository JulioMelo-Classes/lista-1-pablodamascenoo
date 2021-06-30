/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;
using namespace std;

// Se desejar, crie funções aqui, antes do main().

/*
blz
*/
int main(void)
{
    int total=0;
    int intervalos[] = {0,0,0,0,0};
    int x;
    float resultado;
    
    while( cin >> std::ws >> x) {
        total++;
        if(x>=0 && x<25){
            intervalos[0]++;
        }
        else if(x>=25 && x<50){
            intervalos[1]++;
        }
        else if(x>=50 && x<75){
            intervalos[2]++;
        }
        else if(x>=75 && x<100){
            intervalos[3]++;
        }
        else{
            intervalos[4]++;
        }
    }
    for(int i=0; i<5; i++){
        resultado = ((float)intervalos[i]/(float)total)*100;
        cout << setprecision(4)<< resultado <<endl;
    }
    return 0;
}
