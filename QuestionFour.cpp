#include <iostream>

using namespace std;

string isPrime(int numero);

int main (){

    int numero;
    string resposta1,resposta2;

    cin >> numero;

    resposta1 = isPrime(numero);
    resposta2 = isPrime(numero + 2);

    if(resposta1 == resposta2 && resposta1 != "NAO PRIMO!"){
        cout << "PRIMO CASADO!";
    }else{
        cout << resposta1;
    }


}


string isPrime(int numero){

    int contDivisores = 0;

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0)
            contDivisores++;
    }

    if(contDivisores != 2){
        return "NAO PRIMO!";
    }
    else{
        return "PRIMO!";
    }

}


