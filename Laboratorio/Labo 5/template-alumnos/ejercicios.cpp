#include "ejercicios.h"


// Ejercicio 1
bool existePico(vector<int> v){
	int i = 1;
    while (i < v.size() - 1){
        if (v[i] > v[i-1] && v[i] > v[i+1]){
            return true;
        }
        i++;
    }
    return false;
}

// Ejercicio 2
int mcd(int m, int n){
    int a = m >= n ? m : n;
    int b = m < n ? m : n;
    while(b != 0) {
        int resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}

// Ejercicio 3
int indiceMinSubsec(vector<int> v, int l, int r){
	int i = r;
    int res = r;
    while(i >= l){
        if (v[i] < v[res]){
            res = i;
        }
        i--;
    }
    return res;
}


// Ejercicio 4
void ordenar1(vector<int>& v){
	int i = 0;
}

// Ejercicio 5
void ordenar2(vector<int>& v){
	return;
}

// Ejercicio 6
tuple<int,int> division(int n, int d){
	return make_tuple(0,0);
}
