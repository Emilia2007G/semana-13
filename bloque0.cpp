//ejericio 1
#include <iostream>
using namespace std;
void resetSensor(int lectura) {
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // temperatura=38
return 0;
}

//ejercicio 3
#include <iostream>
using namespace std;
void resetSensor(int& lectura) { // <-- nota el &
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // Al utilizar el valor & la temperatura se ha reseteado a 0 
return 0;
}

//ejercicio 4
void aplicarIVA(double& precio, double iva) {
precio *= (1 + iva);
}
int main() {
double precio = 100.00;
aplicarIVA(precio, 0.12);
// aqui, precio vale: 112.00
}