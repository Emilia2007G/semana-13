#include <iostream>
using namespace std;
void intercambiar(int& a, int& b) {
// ESCRIBE TU CODIGO AQUI (3 lineas):
int temp = a; 
a = b; 
b = temp; 
}
int main() {
int x = 15, y = 42;
intercambiar(x, y);
cout << "x = " << x << ", y = " << y << endl;
// output correcto: x = 42, y = 15
return 0;
}

