#include "vectores.h"
#include "fstream"

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}


//Ejercicio
bool divide(vector<int> v, int a){
	// Dados un vector v y un int a, decide si a divide a todos los numeros de v.
    for(int i = 0; i < v.size(); i++){
        if (v[i] % a != 0){
            return false;
        }
    }
    return true;
}

//Ejercicio
int mayor(vector<int> v){
	// Dado un vector v, devuelve el valor maximo encontrado.
    int max = 0;
    for (int i = 0; i<v.size(); i++){
        if (v[i] > max){
            max = v[i];
        }
    }
    return max;
}

//Ejercicio
vector<int> reverso(vector<int> v){
	// Dado un vector v, devuelve el reverso.
    vector<int> v2 = v;
    for (int i = 0; i < v.size(); i++){
        v2[i] = v[v.size()-i-1];
        cout << v2[i] << endl;
    }


    return v2;
}

//Ejercicio
vector<int> rotar(vector<int> v, int k){
	// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
	// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
    vector<int> resultV;
    for (int i = k;i < v.size(); i++){
        resultV.push_back(v[i]);
    }
    for (int j = 0; j < k; j++){
        resultV.push_back(v[j]);
    }
    return resultV;
}

//Ordenado descrecientemente o igual!
bool estaOrdenado(vector<int> v){
    for (int i = 0; i < v.size()-1; i++){
        if (v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}


//Ejercicio
vector<int> factoresPrimos(int n){
	//que dado un entero devuelve un vector con los factores primos del mismo
    vector<int> result;
    int i = 2;
    while (i <= n){
        if (n % i == 0 ){
            n = n/i;
            result.push_back(i);
            i = 2;
        }else{
            i++;
        }
    }
    return result;
}

//Ejercicio
void mostrarVector(vector<int> v){
	//que dado un vector de enteros muestra por la salida estándar, el vector
	// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
    cout << "[";
    for (int i = 0; i < v.size(); ++i) {
        if (i == v.size()-1){
            cout << v[v.size() - 1] << "]" << endl;
        }
        else{
            cout << v[i] << ", ";
        }


    }

}

//Ejercicio
vector<int> leerVector(string nombreArchivo){
    ifstream currentFile;
    currentFile.open(nombreArchivo);
    int q;
    vector<int> result;
    while(!currentFile.eof()){
        currentFile >> q;
        result.push_back(q);
    }
    currentFile.close();
    return result;
}

//Ejercicio
void guardarVector(vector<int> v, string nombreArchivo){
    ofstream currentFile;
    currentFile.open(nombreArchivo);
    currentFile << "[";
    for (int i = 0; i < v.size(); i++){
        if (i == v.size()-1){
            currentFile << v[v.size() - 1] << "]" << endl;
        }
        else{
            currentFile << v[i] << ", ";
        }
    }

}

//Ejercicio


