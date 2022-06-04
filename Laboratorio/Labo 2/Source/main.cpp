#include <iostream>
#include <math.h>

using namespace std;
//Ejercicio 1
int promediarNotas(){
    int i = 1;
    int result = 0;
    int count;
    while (i <= 10){
        cin >> count;
        result += count;
        i++;
    }
    return result/10;
}

//Ejercicio 2
int promediarNotas2(){
    int i = true;
    int result = 0;
    int count;
    int iter = 0;
    while (i == true){
        cin >> count;
        if (count == -1){
            i = false;
        }else {
            result += count;
        }
        iter++;
    }
    return result/(iter-1);
}

//Ejercicio 3
int aprobar(){
    int i = true;
    int aprobados = 0;
    int desaprobados = 0;
    int count;
    int totalAl = 0;
    while (i == true){
        cin >> count;
        if (count == -1){
            i = false;
        }else {
            if (count > 6){
                aprobados++;
            }
            else{
                desaprobados++;
            }
        }
        totalAl++;
    }
    if (totalAl < 6){
        cout << "Deben ser más de 6 notas" << endl;
        return 0;
    }else{
        cout << "Aprobados: " << aprobados << endl;
        cout << "Desaprobados: " << desaprobados << endl;

        if ((float(aprobados) / float(totalAl)) > 2/3){
            cout << "Se puede incrementar el numero de plazas" << endl;
        }
        return 1;
    }

}

//Ejercicio 4 (copiado)
int binarioADecimal(){
    int binario = 0;
    std::cout << "Ingrese número binario:" << std::endl;
    std::cin >> binario;
    int decimal = 0;
    int potencia = 0;
    while (binario > 0) {
        int cifra = binario % 10;
        if (cifra == 1) {
            decimal += pow(2, potencia);
        }
        binario = binario / 10;
        potencia++;
    }
    std::cout << "Decimal: " << decimal << std::endl;
    return 0;
}

//Ejercicio 5
int datosCirculo(float radio, float& diametro, float& area, float& circunferencia){
    diametro = 2*radio;
    circunferencia = 3.14159*diametro;
    area = 3.14159*radio;
    return 0;
}

//Ejercicio 6

int triplicaPorValor(int x){
    return x*3;
}

void triplicaPorReferencia(int& x){
    x = x*3;
}

//Ejercicio 7

void swap(int& a, int& b){
    a = a+b;
    b = a-b;
    a = a-b;
}

//Ejercicio 8
void collatz(int n, int& cantPasos){
    cantPasos = 1;
    while (n != 1){
        if (n % 2 == 0){
            n = n/2;
        }
        else{
            n = 3*n + 1;
        }
        cout << n << endl;
        cantPasos++;
    }
}
//Ejercicio 9
void division(int dividendo, int divisor, int &cociente, int &resto){
    cociente = 0;
    while (dividendo >= divisor){
        dividendo = dividendo - divisor;
        cociente++;
    }
    resto = dividendo;

}

int main() {
    std::cout << "Hello, World!" << std::endl;

    cout << promediarNotas() << endl;
    cout << promediarNotas2() << endl;
    cout << aprobar() << endl;
    cout << binarioADecimal() << endl;

    float diametro, area, radio, circunferencia;
    cout << "Radio: " << endl;
    cin >> radio;
    cout << datosCirculo(radio, diametro, area, circunferencia) << endl;
    cout << "Diametro: " << diametro << endl;
    cout << "Area: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;

    int x = 10;
    x = triplicaPorValor(x);
    cout << x << endl;

    x = 10;
    cout << x << endl;

    triplicaPorReferencia(x);
    cout << x << endl;

    int a = 10;
    int b = 15;
    cout << a << b << endl;
    swap(a,b);
    cout << a << b << endl;

    int dividendo, divisor, cociente, resto;
    cin >> dividendo >> divisor;
    division(dividendo, divisor, cociente, resto);
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;


    int cantPasos;
    int numero;
    cin >> numero;
    collatz(numero, cantPasos);
    cout << "Pasos: " << cantPasos << endl;
    return 0;
}
