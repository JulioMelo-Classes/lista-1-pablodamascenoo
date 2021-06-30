#include <iostream>

using namespace std;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
    int n, count = 0;
    // TODO: Adicione aqui seu código.
    for (int i=0; i<5; i++){
        cin>>n;
        if(n < 0){
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}
