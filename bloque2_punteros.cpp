//ejercicio 2.1
#include <iostream>
using namespace std;
int main() {
int stock = 250;
int* p = &stock;
cout << stock << endl; // (1) 250
cout << p << endl; // (2) 0x5ffe84
cout << *p << endl; // (3) 250
*p = 180; // se vendieron 70 unidades
cout << stock << endl; // (4) 180
return 0;
}
//ejercicio 2.2
#include <iostream>
using namespace std;
void aplicarIVA(double* precio, double iva) {
// TU CODIGO (1 linea):
*precio *= (1 + iva);
}
int main() {
double precio = 100.00;
aplicarIVA(&precio, 0.12);
cout << "Precio con IVA: " << precio << endl; // 112.00
return 0;
}
//ejercicio 2.3
void incrementar(int& val, int n){
val += n;
}

int contador = 10;
incrementar(contador, 5);


void incrementar(int* val, int n){
*val += n;
}
int contador = 10;
incrementar(&contador, 5);

/*
Como se llama:
 Pregunta 1: ¿Como se llama la funcion en cada caso? Escribe las dos lineas de llamada y senala la diferencia.
 Incrementar pero cambia los signos de los parametros, en la primera version & y en la segunda *
Pregunta 2: ¿Que operador aparece dentro del CUERPO de la version con puntero que no aparece en la version con
referencia?
En la operacion con puntero se utiliza el operador de (*)   
Pregunta 3: Despues de ejecutar, ¿contador vale 15 en ambos casos? Escribe si o no y explica por que. 
Si, porque en ambos casos se esta modificando el valor de contador, en la version con referencia se esta modificando 
directamente el valor de contador, mientras que en la version con puntero se esta modificando el valor al que apunta el puntero, que es contador.
*/
