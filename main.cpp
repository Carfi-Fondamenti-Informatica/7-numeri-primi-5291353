

#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int numero=0, conta=0;
    cin>>numero;
    numprimo(numero,1,conta);
    if(conta==0){
        cout << "il numero e\' primo"<<endl;
    }else{
        cout<< "il numero non e\' primo"<<endl;
    }

    return 0;
}
