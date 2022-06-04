#include "generador.h"
#include "vectores.h"
#include "fstream"




using namespace std;

int main() {
    // funcion para generar automaticamente los archivos numericos
    // generarDatosLaboratorio(); // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar
    holaModuloVectores(); // función definida en vectores.cpp



    vector<int> v {3,3,32,120,300};


    cout << divide(v,3) << endl;

    cout << mayor(v) <<endl;

    reverso(v);

    rotar(v, 2);

    cout << estaOrdenado(v) << endl;

    vector<int> x = factoresPrimos(1050);

    mostrarVector(x);

    cout << " "<<  endl;

    mostrarVector(v);

    mostrarVector(leerVector("../archivos/leerVector.in"));

    guardarVector(v,"..archivos/guardarVector.in");


    return 0;
}





