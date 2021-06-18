/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    
    int m=0,n=0;
    int soma=0;

    while(cin >> std::ws >> m >> n){
        soma = 0;
        if(n>0){
            for(int i=0; i<n; i++){
                soma = soma+m;
                m++;
            }
            cout<<soma<<endl;
        }
        else if(n<0){
            for(int i=0; i<(n*-1); i++){
                soma = soma+m;
                m--;
            }
            cout<<soma<<endl;
        }
        else{
            cout<<m<<endl;
        }
    }

    return 0;
}
