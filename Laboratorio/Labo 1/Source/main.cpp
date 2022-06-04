#include <iostream>

using namespace std;

//Ejercicio 1
int f(int x){
    return x+1;
}

//Ejercicio 2
int suma(int x, int y){
    return x+y;
}

//Ejercicio 4
bool esPrimo(int n){
    int divisores = 0;
    for (int i = 2; i <= n/2; i++){
        if(n % i == 0){
            divisores++;
        }
    }
    if (divisores == 0){return true;}
    else{return false;}
}

//Ejercicio 5
int fib(int n){
    int f_0 = 0;
    int f_1 = 1;
    int fn = 0;
    for (int i = 2; i <= n; i++){
        fn = f_0 + f_1;
        f_0 = f_1;
        f_1 = fn;
    }
    return fn;
}

//Ejercicio 6
int sumMenoresImpares(int n){
    int result = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 != 0){
            result += i;
        }
    }
    return result;
}

//Ejercicio 7
int sumaDivisores(int n){
    int result = 0;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            result += i;
        }
    }
    return result;
}

int main() {
    int n1,n2, np;
    cout << "Hello, World!" << endl;
    cout << "El resultado es: " << f(10) << endl;
    //Ejercicio3
    cin >> n1;
    cin >> n2;
    cout << "El resultado de sumar " << n1 << " y " << n2 << " es: " << suma(n1,n2) << endl;
    cin >> np;
    cout << np << " es primo?" << endl;
    cout << esPrimo(np) << endl;
    cout << fib(14) << endl;
    cout << sumMenoresImpares(10) << endl;
    cout << sumaDivisores(32) << endl;
    return 0;
}

